#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)181;
short var_1 = (short)-20909;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)121;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)38;
short var_11 = (short)20730;
short var_12 = (short)-261;
int zero = 0;
short var_14 = (short)-4658;
unsigned long long int var_15 = 8788745508968896361ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 13528743628116656162ULL;
_Bool arr_2 [18] [18] ;
_Bool arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
