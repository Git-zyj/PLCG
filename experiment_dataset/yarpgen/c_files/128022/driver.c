#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64248;
unsigned char var_4 = (unsigned char)141;
unsigned int var_5 = 3359951869U;
unsigned short var_6 = (unsigned short)9740;
unsigned short var_7 = (unsigned short)30618;
signed char var_8 = (signed char)97;
long long int var_9 = 1100392791073961762LL;
unsigned char var_10 = (unsigned char)239;
short var_11 = (short)13101;
unsigned char var_12 = (unsigned char)216;
_Bool var_16 = (_Bool)0;
long long int var_17 = -1535225302547846345LL;
int var_18 = 1525752500;
long long int var_19 = -6691852746963907702LL;
int zero = 0;
unsigned int var_20 = 1156667141U;
short var_21 = (short)22541;
unsigned char var_22 = (unsigned char)105;
long long int var_23 = 1288126671777897509LL;
int var_24 = -1783711907;
int var_25 = 273317044;
long long int var_26 = -4161455588594558403LL;
unsigned int var_27 = 581180854U;
signed char var_28 = (signed char)-109;
short var_29 = (short)-22803;
signed char var_30 = (signed char)-50;
unsigned int var_31 = 4056117215U;
long long int var_32 = 3386951875084104695LL;
signed char var_33 = (signed char)-6;
unsigned short var_34 = (unsigned short)43366;
short var_35 = (short)-25589;
int var_36 = -1844275813;
int var_37 = 1542464335;
short var_38 = (short)29261;
unsigned int var_39 = 2153154847U;
unsigned int var_40 = 2448297174U;
unsigned short arr_0 [23] ;
signed char arr_1 [23] ;
unsigned short arr_3 [12] ;
int arr_4 [12] ;
_Bool arr_11 [20] ;
short arr_16 [20] ;
int arr_17 [20] [20] ;
unsigned short arr_7 [12] [12] ;
short arr_8 [12] ;
short arr_9 [12] [12] ;
long long int arr_18 [20] [20] [20] [20] ;
unsigned short arr_22 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)19686;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)62965;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -36706882;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (short)-7527;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = 1255064014;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)25038 : (unsigned short)64258;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-23160 : (short)6475;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-26667 : (short)-7224;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2452671984360598756LL : -9081025961448698429LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49519 : (unsigned short)44143;
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
