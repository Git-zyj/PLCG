#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 15730266333494285219ULL;
unsigned long long int var_2 = 6549247740645391544ULL;
long long int var_3 = -8372160200638757433LL;
long long int var_4 = -742860281650660533LL;
unsigned short var_7 = (unsigned short)2903;
unsigned char var_8 = (unsigned char)143;
unsigned char var_10 = (unsigned char)24;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 15030845889596064772ULL;
unsigned short var_14 = (unsigned short)28347;
unsigned short var_15 = (unsigned short)51860;
short var_16 = (short)-22464;
unsigned char var_17 = (unsigned char)86;
long long int var_18 = 1327207565558407876LL;
int var_19 = 1531550287;
unsigned char var_20 = (unsigned char)221;
unsigned int var_21 = 956643284U;
unsigned char var_22 = (unsigned char)69;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)221;
unsigned short var_26 = (unsigned short)2770;
short var_27 = (short)-20180;
signed char var_28 = (signed char)-53;
unsigned short var_29 = (unsigned short)63110;
unsigned long long int arr_2 [10] ;
short arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 15791887659025204798ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-12826 : (short)-17106;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
