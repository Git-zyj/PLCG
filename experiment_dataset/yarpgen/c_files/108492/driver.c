#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)120;
long long int var_2 = 3905438259836150287LL;
long long int var_3 = 5035827260014872887LL;
long long int var_4 = 6310350200971785604LL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 2290208756733519060ULL;
long long int var_8 = -5624936958818219174LL;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)227;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-44;
_Bool var_17 = (_Bool)0;
_Bool var_19 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 18016730429516812867ULL;
long long int var_22 = -2955230442419884085LL;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)152;
_Bool var_25 = (_Bool)0;
long long int var_26 = -8660461881077447234LL;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)114;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)1;
unsigned char var_31 = (unsigned char)155;
unsigned char var_32 = (unsigned char)197;
unsigned long long int var_33 = 7791637191383879332ULL;
signed char var_34 = (signed char)-24;
unsigned char var_35 = (unsigned char)223;
_Bool arr_12 [24] ;
_Bool arr_19 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
