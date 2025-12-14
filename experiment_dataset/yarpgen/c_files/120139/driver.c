#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11719758102511327900ULL;
unsigned long long int var_1 = 4394958499262201728ULL;
long long int var_3 = 2446222705823764707LL;
unsigned char var_5 = (unsigned char)140;
signed char var_12 = (signed char)47;
unsigned short var_13 = (unsigned short)16014;
unsigned char var_15 = (unsigned char)115;
_Bool var_16 = (_Bool)1;
long long int var_17 = 1502401852129309651LL;
int zero = 0;
unsigned short var_20 = (unsigned short)34486;
unsigned int var_21 = 1019500240U;
unsigned long long int var_22 = 4468900865976611542ULL;
unsigned char var_23 = (unsigned char)237;
signed char var_24 = (signed char)-96;
unsigned char var_25 = (unsigned char)56;
long long int var_26 = -6150620870673570259LL;
unsigned int var_27 = 1952391345U;
long long int var_28 = 4045881634804288859LL;
int var_29 = -1937286659;
signed char arr_0 [14] [14] ;
long long int arr_2 [14] ;
long long int arr_4 [14] [14] [14] ;
int arr_5 [14] [14] ;
_Bool arr_8 [13] ;
short arr_9 [13] [13] [13] ;
_Bool arr_10 [13] [13] [13] ;
unsigned int arr_12 [13] [13] ;
unsigned char arr_3 [14] [14] ;
unsigned long long int arr_6 [14] ;
long long int arr_13 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)0 : (signed char)85;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 3330751785973664816LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2843224386500173688LL : 32602843689229040LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 1547679858;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-3147 : (short)-19689;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = 1742570060U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)139 : (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 12145291364255540609ULL : 10469711563223215616ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 4834854167002317761LL : 3236064733588732020LL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
