#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-31701;
unsigned short var_5 = (unsigned short)33678;
_Bool var_6 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-36;
unsigned long long int var_15 = 6663620363404877826ULL;
unsigned long long int var_16 = 12540240169878179717ULL;
unsigned int var_17 = 577825891U;
signed char arr_0 [19] ;
unsigned short arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)49715;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
