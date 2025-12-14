#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = 6530428004446421605LL;
signed char var_5 = (signed char)49;
unsigned char var_6 = (unsigned char)31;
_Bool var_7 = (_Bool)0;
short var_9 = (short)18853;
short var_10 = (short)-12473;
int zero = 0;
int var_15 = -1206535194;
unsigned int var_16 = 82129262U;
int var_17 = -320194416;
unsigned long long int var_18 = 7478295494689628376ULL;
unsigned int var_19 = 3777316833U;
int var_20 = 469398942;
short var_21 = (short)2218;
_Bool arr_5 [11] ;
short arr_11 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-20176;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
