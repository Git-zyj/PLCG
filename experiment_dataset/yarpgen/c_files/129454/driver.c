#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)17245;
short var_2 = (short)-26185;
short var_8 = (short)831;
signed char var_9 = (signed char)-91;
int zero = 0;
short var_14 = (short)3961;
unsigned short var_15 = (unsigned short)16324;
int var_16 = -2079541099;
int var_17 = -287064807;
short var_18 = (short)-28849;
int var_19 = 1307012538;
unsigned short var_20 = (unsigned short)45031;
int arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1196802830 : -283026158;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
