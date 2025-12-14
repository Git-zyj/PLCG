#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1164689161;
long long int var_1 = -3358484983398303958LL;
unsigned short var_2 = (unsigned short)59431;
unsigned char var_3 = (unsigned char)245;
unsigned char var_4 = (unsigned char)111;
unsigned short var_5 = (unsigned short)28001;
unsigned short var_6 = (unsigned short)12021;
unsigned long long int var_7 = 4382647290741594858ULL;
int var_8 = 1252104655;
long long int var_9 = -7364664874107432080LL;
long long int var_10 = -2369953357916933201LL;
long long int var_11 = -6798559385426644675LL;
unsigned short var_12 = (unsigned short)27084;
unsigned char var_13 = (unsigned char)158;
int zero = 0;
int var_14 = -2108763151;
unsigned short var_15 = (unsigned short)25075;
unsigned char var_16 = (unsigned char)32;
unsigned char var_17 = (unsigned char)132;
long long int var_18 = -8216497978275726530LL;
long long int var_19 = -6305468211859640107LL;
long long int var_20 = -1452866358852754647LL;
unsigned short var_21 = (unsigned short)46038;
unsigned char var_22 = (unsigned char)35;
unsigned char var_23 = (unsigned char)226;
unsigned short var_24 = (unsigned short)59379;
unsigned short var_25 = (unsigned short)51778;
long long int var_26 = 6470767295157596046LL;
unsigned short var_27 = (unsigned short)56453;
unsigned long long int var_28 = 2445597425547635402ULL;
int arr_11 [21] [21] ;
signed char arr_17 [21] ;
unsigned char arr_24 [21] [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = -1375224166;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)85;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
