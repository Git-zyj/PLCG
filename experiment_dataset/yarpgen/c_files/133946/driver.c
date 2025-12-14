#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)11377;
short var_4 = (short)24289;
short var_5 = (short)-26225;
unsigned short var_6 = (unsigned short)53407;
int var_7 = -1323957915;
long long int var_8 = -674930988906677005LL;
signed char var_9 = (signed char)108;
unsigned char var_10 = (unsigned char)32;
signed char var_11 = (signed char)98;
unsigned short var_12 = (unsigned short)52567;
short var_13 = (short)-15809;
int var_14 = -25028494;
signed char var_15 = (signed char)-122;
int var_17 = 1719616512;
unsigned short var_18 = (unsigned short)53755;
int zero = 0;
signed char var_19 = (signed char)94;
unsigned char var_20 = (unsigned char)231;
short var_21 = (short)31684;
int var_22 = 2045454975;
unsigned char var_23 = (unsigned char)25;
signed char var_24 = (signed char)105;
long long int var_25 = -3823780545515875844LL;
int var_26 = 1963991982;
long long int var_27 = -8577617428196623200LL;
_Bool var_28 = (_Bool)1;
short var_29 = (short)-28197;
unsigned char var_30 = (unsigned char)224;
unsigned char var_31 = (unsigned char)20;
int var_32 = 483995061;
signed char var_33 = (signed char)-79;
short var_34 = (short)-12352;
short arr_7 [15] [15] [15] [15] ;
short arr_18 [18] ;
unsigned char arr_19 [18] ;
int arr_21 [18] ;
unsigned int arr_22 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)7141;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (short)-4372;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = 938868310;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = 2700307023U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
