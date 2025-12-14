#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10772849494652474224ULL;
unsigned long long int var_7 = 3556566393436907067ULL;
unsigned long long int var_9 = 14489562636838611562ULL;
unsigned int var_10 = 846595049U;
unsigned short var_13 = (unsigned short)59446;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 2948166705U;
long long int var_18 = -3962220904040919164LL;
unsigned char var_19 = (unsigned char)58;
unsigned int arr_3 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3643794713U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
