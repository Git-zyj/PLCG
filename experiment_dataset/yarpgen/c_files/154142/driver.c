#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26069;
unsigned short var_4 = (unsigned short)39964;
unsigned long long int var_5 = 6667945610808598792ULL;
unsigned long long int var_16 = 6731691994347281976ULL;
int zero = 0;
unsigned long long int var_17 = 7484014894213774920ULL;
long long int var_18 = -4651220958644089731LL;
_Bool var_19 = (_Bool)1;
int arr_2 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -2121657487;
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
