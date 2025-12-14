#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 634964719;
short var_19 = (short)-5650;
_Bool var_20 = (_Bool)0;
int var_21 = -1698716966;
unsigned int var_22 = 2831549324U;
unsigned int var_23 = 1347484999U;
unsigned short var_24 = (unsigned short)1694;
long long int var_25 = 6928912915982912128LL;
unsigned char var_26 = (unsigned char)68;
_Bool var_27 = (_Bool)0;
unsigned char var_28 = (unsigned char)69;
unsigned long long int var_29 = 15256826917533051237ULL;
unsigned char var_30 = (unsigned char)74;
_Bool var_31 = (_Bool)1;
unsigned int var_32 = 2317987399U;
_Bool arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
