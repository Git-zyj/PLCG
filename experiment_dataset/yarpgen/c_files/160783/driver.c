#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11977968992427643896ULL;
long long int var_5 = -7404193217065407625LL;
signed char var_6 = (signed char)-49;
unsigned long long int var_7 = 5711531745813920088ULL;
short var_12 = (short)-4315;
signed char var_13 = (signed char)45;
int var_14 = 1790521721;
_Bool var_15 = (_Bool)1;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 13120129898751229869ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)59;
unsigned short var_21 = (unsigned short)45752;
short var_22 = (short)-12470;
signed char var_23 = (signed char)30;
_Bool var_24 = (_Bool)1;
signed char var_25 = (signed char)-65;
short var_26 = (short)28475;
unsigned int var_27 = 2721238403U;
long long int var_28 = 1304301927337628473LL;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)1;
short arr_0 [14] ;
unsigned char arr_3 [14] [14] ;
short arr_5 [14] [14] ;
unsigned long long int arr_6 [14] ;
int arr_13 [22] ;
_Bool arr_14 [22] ;
unsigned char arr_9 [14] ;
unsigned char arr_12 [14] ;
unsigned short arr_15 [22] ;
signed char arr_16 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)3585;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)23 : (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-7794 : (short)15974;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 7265952597468142064ULL : 8969737719490046276ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 1342308146 : -1688216162;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)129 : (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)5 : (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56588 : (unsigned short)52768;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (signed char)-117 : (signed char)53;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
