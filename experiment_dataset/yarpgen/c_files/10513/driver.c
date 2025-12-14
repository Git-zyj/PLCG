#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1690115017U;
unsigned short var_1 = (unsigned short)40808;
long long int var_3 = -5053961684624430486LL;
unsigned char var_4 = (unsigned char)188;
_Bool var_7 = (_Bool)1;
unsigned short var_15 = (unsigned short)60439;
int zero = 0;
unsigned char var_19 = (unsigned char)63;
unsigned long long int var_20 = 4832973194342883520ULL;
unsigned short var_21 = (unsigned short)9569;
unsigned long long int var_22 = 8605867221362003405ULL;
short var_23 = (short)-30208;
unsigned long long int var_24 = 18114531642901702540ULL;
_Bool var_25 = (_Bool)1;
short var_26 = (short)-20242;
signed char var_27 = (signed char)-91;
long long int var_28 = -1152194618895387038LL;
unsigned long long int var_29 = 11731443709905861129ULL;
unsigned short arr_0 [14] ;
unsigned char arr_1 [14] ;
unsigned short arr_5 [14] [14] ;
unsigned short arr_6 [14] [14] ;
short arr_8 [20] [20] ;
unsigned long long int arr_9 [20] [20] ;
unsigned char arr_11 [10] ;
_Bool arr_18 [10] [10] ;
short arr_22 [10] ;
unsigned char arr_7 [14] ;
unsigned long long int arr_10 [20] [20] ;
unsigned short arr_13 [10] ;
unsigned long long int arr_20 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49489 : (unsigned short)51573;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)23 : (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)17128;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)63493 : (unsigned short)4426;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (short)3468;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 12504566514697131040ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_18 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_22 [i_0] = (short)16167;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)204 : (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 6283101405804517672ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (unsigned short)9797;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = 12831024316072979616ULL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
