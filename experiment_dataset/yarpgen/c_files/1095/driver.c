#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-107;
int var_6 = -1449054280;
short var_8 = (short)25404;
long long int var_9 = -6524238350219224385LL;
unsigned int var_11 = 611327311U;
int zero = 0;
long long int var_12 = 3685396824488801631LL;
unsigned int var_13 = 1264101912U;
unsigned char var_14 = (unsigned char)19;
short var_15 = (short)-31289;
unsigned int var_16 = 3622260872U;
unsigned char var_17 = (unsigned char)87;
unsigned char var_18 = (unsigned char)171;
_Bool arr_6 [10] ;
unsigned long long int arr_8 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 5976454944943029543ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
