#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54013;
unsigned char var_4 = (unsigned char)231;
long long int var_5 = 7873841207644455898LL;
unsigned short var_6 = (unsigned short)61811;
signed char var_7 = (signed char)95;
int zero = 0;
unsigned int var_10 = 1595274012U;
signed char var_11 = (signed char)-13;
unsigned int var_12 = 1559268159U;
short var_13 = (short)4812;
unsigned char var_14 = (unsigned char)12;
_Bool arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
