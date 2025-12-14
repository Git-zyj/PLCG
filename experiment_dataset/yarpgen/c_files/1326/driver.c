#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21358;
unsigned long long int var_2 = 7337264632378163336ULL;
int var_3 = 311845612;
long long int var_5 = -160383613206341142LL;
short var_6 = (short)-11151;
unsigned long long int var_8 = 2574549006194426481ULL;
unsigned short var_9 = (unsigned short)37384;
unsigned short var_10 = (unsigned short)4172;
short var_11 = (short)-14101;
int zero = 0;
int var_12 = -1580174804;
unsigned char var_13 = (unsigned char)102;
unsigned long long int var_14 = 7978650537410821344ULL;
unsigned short var_15 = (unsigned short)26563;
long long int var_16 = -4831756144546369437LL;
unsigned long long int var_17 = 13433888292960151530ULL;
unsigned char arr_0 [12] ;
unsigned short arr_1 [12] ;
unsigned char arr_4 [17] ;
unsigned char arr_5 [17] [17] ;
short arr_6 [17] [17] ;
int arr_7 [17] [17] ;
int arr_8 [17] ;
long long int arr_2 [12] ;
int arr_3 [12] [12] ;
unsigned short arr_13 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)19143;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-25424;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 1951210679;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -934457504;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 598575968565945261LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = -666938617;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)42508;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
