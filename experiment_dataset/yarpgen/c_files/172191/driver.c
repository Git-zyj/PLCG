#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)22;
int var_4 = 1807185426;
unsigned short var_5 = (unsigned short)16580;
unsigned char var_7 = (unsigned char)99;
short var_8 = (short)15177;
signed char var_9 = (signed char)9;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)81;
short var_12 = (short)3478;
int var_13 = 48475307;
short var_16 = (short)14519;
int zero = 0;
unsigned short var_18 = (unsigned short)60818;
unsigned char var_19 = (unsigned char)200;
unsigned char var_20 = (unsigned char)113;
unsigned int var_21 = 3080414530U;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 8650483122925687931ULL;
unsigned short var_24 = (unsigned short)24753;
unsigned char var_25 = (unsigned char)77;
unsigned char var_26 = (unsigned char)3;
unsigned char var_27 = (unsigned char)227;
short var_28 = (short)21832;
unsigned short var_29 = (unsigned short)24712;
unsigned char var_30 = (unsigned char)62;
unsigned int var_31 = 4205700807U;
unsigned char var_32 = (unsigned char)19;
short var_33 = (short)-8148;
signed char arr_4 [14] [14] ;
_Bool arr_5 [14] ;
long long int arr_12 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 8596044092494303736LL;
}

void checksum() {
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
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
