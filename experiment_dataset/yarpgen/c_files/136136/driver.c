#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9342050967919858599ULL;
int var_5 = 1328010775;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)6457;
long long int var_8 = -8587151169817393956LL;
short var_9 = (short)24282;
int zero = 0;
unsigned int var_14 = 147477878U;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)63694;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 11022626114971558067ULL;
unsigned char arr_0 [25] [25] ;
short arr_1 [25] [25] ;
int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-11452;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -1091071958;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
