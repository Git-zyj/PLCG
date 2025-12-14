#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)47;
short var_2 = (short)17952;
signed char var_3 = (signed char)106;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3112928624U;
long long int var_6 = 6278823690637482407LL;
long long int var_7 = 5276509546187025993LL;
short var_8 = (short)-12028;
unsigned long long int var_9 = 1341360352951554349ULL;
long long int var_10 = -3297253355869949413LL;
int zero = 0;
unsigned short var_11 = (unsigned short)36586;
signed char var_12 = (signed char)-19;
short var_13 = (short)-2315;
short var_14 = (short)16867;
signed char var_15 = (signed char)30;
signed char var_16 = (signed char)123;
unsigned int var_17 = 3564813260U;
int var_18 = 1836440927;
signed char var_19 = (signed char)-39;
short var_20 = (short)29563;
unsigned char var_21 = (unsigned char)238;
long long int var_22 = 2575228988295221944LL;
signed char var_23 = (signed char)116;
unsigned int var_24 = 2133749047U;
int var_25 = 648814953;
long long int var_26 = -9079017716650047301LL;
unsigned int var_27 = 1262726821U;
short var_28 = (short)-29485;
unsigned int var_29 = 3038985274U;
unsigned char var_30 = (unsigned char)81;
unsigned int var_31 = 699538646U;
signed char var_32 = (signed char)3;
unsigned char var_33 = (unsigned char)30;
int var_34 = -1921628809;
int var_35 = -1437212867;
unsigned char var_36 = (unsigned char)52;
short var_37 = (short)11355;
unsigned char var_38 = (unsigned char)93;
signed char var_39 = (signed char)42;
unsigned long long int var_40 = 9812218571391571070ULL;
unsigned int var_41 = 2227314479U;
short var_42 = (short)-29554;
signed char arr_0 [13] ;
short arr_1 [13] ;
short arr_3 [13] [13] [13] ;
short arr_4 [13] ;
unsigned int arr_5 [13] [13] ;
unsigned int arr_6 [13] ;
short arr_7 [13] [13] [13] ;
unsigned char arr_8 [13] [13] [13] ;
unsigned short arr_9 [13] ;
signed char arr_10 [13] [13] [13] [13] ;
short arr_11 [13] [13] [13] [13] [13] [13] ;
short arr_12 [13] [13] [13] ;
short arr_13 [13] [13] [13] [13] ;
unsigned long long int arr_15 [13] ;
unsigned int arr_18 [13] ;
unsigned char arr_19 [13] [13] [13] [13] ;
short arr_21 [13] [13] [13] [13] [13] [13] ;
short arr_22 [13] [13] [13] [13] [13] ;
unsigned int arr_24 [13] [13] [13] ;
long long int arr_26 [13] [13] [13] [13] [13] ;
int arr_27 [13] [13] [13] [13] [13] [13] ;
unsigned int arr_28 [13] [13] [13] ;
long long int arr_30 [13] [13] [13] [13] [13] ;
unsigned int arr_33 [13] [13] [13] ;
unsigned long long int arr_36 [19] ;
unsigned char arr_37 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)-15834;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)15812;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)-15348;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 964416519U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 2737384713U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)23600 : (short)-4301;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)161 : (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (unsigned short)32068;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-26154;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)1262;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)28930 : (short)-29990;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 6591156022268192337ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 478354539U : 1474715866U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-28125;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)6389 : (short)6170;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 1146619348U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = 2464968831404709288LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? -80648024 : 1260527939;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 773072488U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = -5717230433417626684LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 167492245U : 2931930967U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_36 [i_0] = 2463831664304498525ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_37 [i_0] = (unsigned char)139;
}

void checksum() {
    hash(&seed, var_11);
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
