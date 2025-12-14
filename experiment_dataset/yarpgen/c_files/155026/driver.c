#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 14518174585788123003ULL;
long long int var_8 = 1678446492449286325LL;
signed char var_9 = (signed char)-119;
_Bool var_10 = (_Bool)1;
short var_11 = (short)6539;
unsigned int var_12 = 4294263361U;
unsigned char var_13 = (unsigned char)231;
int zero = 0;
unsigned char var_17 = (unsigned char)142;
unsigned long long int var_18 = 11430202152530382847ULL;
unsigned int var_19 = 2263371237U;
signed char var_20 = (signed char)-41;
short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)-18699;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
