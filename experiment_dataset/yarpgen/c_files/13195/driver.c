#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11301596328101739172ULL;
unsigned char var_2 = (unsigned char)88;
unsigned short var_3 = (unsigned short)8760;
unsigned long long int var_4 = 14101995297214389663ULL;
unsigned long long int var_5 = 16367850714056682563ULL;
int var_7 = 2107601805;
unsigned char var_9 = (unsigned char)184;
unsigned int var_10 = 909491557U;
unsigned char var_11 = (unsigned char)147;
short var_14 = (short)-21363;
unsigned int var_15 = 1896043564U;
int zero = 0;
unsigned int var_16 = 620517531U;
unsigned int var_17 = 1907604325U;
long long int var_18 = -4665724903551709839LL;
unsigned int var_19 = 272384548U;
unsigned int var_20 = 3832293835U;
short var_21 = (short)22310;
unsigned long long int var_22 = 3266748181699857261ULL;
int var_23 = 1291552151;
unsigned char arr_0 [17] [17] ;
unsigned char arr_1 [17] [17] ;
int arr_4 [25] ;
_Bool arr_5 [25] ;
unsigned long long int arr_7 [12] ;
int arr_2 [17] ;
unsigned int arr_3 [17] ;
unsigned short arr_6 [25] ;
int arr_9 [12] ;
unsigned int arr_10 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)84 : (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 46686318;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 4708648763579366197ULL : 7136816840868747935ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -731673462 : -1215084906;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2286517370U : 1736146077U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned short)31563;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -1056840983 : 955087778;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 139293325U : 2921411062U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
