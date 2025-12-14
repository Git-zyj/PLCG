#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43108;
unsigned short var_4 = (unsigned short)64333;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int var_12 = 1935454342;
signed char var_17 = (signed char)93;
int zero = 0;
unsigned long long int var_18 = 8616808965892306369ULL;
unsigned int var_19 = 1604247778U;
int var_20 = -1581732427;
unsigned char var_21 = (unsigned char)186;
unsigned int var_22 = 4021613209U;
unsigned char var_23 = (unsigned char)139;
_Bool var_24 = (_Bool)0;
long long int var_25 = 3459230224584654268LL;
long long int var_26 = 183159546909321219LL;
int var_27 = -444016018;
unsigned short var_28 = (unsigned short)7562;
unsigned short var_29 = (unsigned short)23984;
signed char var_30 = (signed char)-70;
unsigned char var_31 = (unsigned char)204;
unsigned short var_32 = (unsigned short)62749;
_Bool var_33 = (_Bool)0;
long long int var_34 = 9181729603838058229LL;
_Bool var_35 = (_Bool)0;
long long int var_36 = 569737665663155459LL;
_Bool var_37 = (_Bool)0;
unsigned short var_38 = (unsigned short)3255;
unsigned short arr_0 [20] [20] ;
unsigned int arr_3 [20] ;
_Bool arr_16 [24] [24] [24] ;
int arr_19 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)1043;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 3485293790U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 1799227310;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
