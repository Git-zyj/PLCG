#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)98;
unsigned int var_7 = 1239273459U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)15;
unsigned long long int var_16 = 13804715475091221929ULL;
long long int var_17 = 159347004183285835LL;
int var_18 = -1020312384;
long long int arr_0 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = -6516072610315596959LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
