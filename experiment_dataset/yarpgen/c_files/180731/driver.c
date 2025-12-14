#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6197688574039801461ULL;
unsigned int var_1 = 907453654U;
unsigned char var_3 = (unsigned char)218;
long long int var_4 = -6340921251987558172LL;
unsigned short var_6 = (unsigned short)30542;
int var_7 = 1213952569;
unsigned int var_8 = 3269831477U;
long long int var_9 = 9011635231821675365LL;
signed char var_10 = (signed char)121;
unsigned long long int var_11 = 9156733585620911861ULL;
unsigned int var_13 = 261502317U;
unsigned short var_14 = (unsigned short)34472;
signed char var_16 = (signed char)-50;
int zero = 0;
unsigned char var_17 = (unsigned char)85;
unsigned int var_18 = 1927518481U;
_Bool var_19 = (_Bool)1;
long long int var_20 = 7078180107532259193LL;
unsigned long long int var_21 = 6356837283608350850ULL;
unsigned long long int var_22 = 1688262974353538944ULL;
int var_23 = 1105361704;
unsigned short var_24 = (unsigned short)21641;
unsigned char var_25 = (unsigned char)198;
unsigned long long int var_26 = 1956621194208680224ULL;
int arr_2 [13] ;
int arr_4 [13] [13] ;
signed char arr_5 [13] [13] [13] [13] ;
signed char arr_6 [13] [13] ;
unsigned short arr_8 [16] ;
unsigned int arr_9 [16] ;
unsigned long long int arr_10 [16] [16] [16] ;
int arr_11 [16] ;
unsigned char arr_13 [16] [16] [16] ;
short arr_15 [16] [16] [16] [16] ;
long long int arr_16 [16] [16] [16] [16] [16] ;
unsigned int arr_18 [16] [16] [16] [16] ;
unsigned long long int arr_19 [16] ;
unsigned short arr_20 [16] ;
unsigned long long int arr_23 [16] [16] [16] [16] ;
unsigned char arr_22 [16] [16] ;
short arr_25 [16] [16] [16] ;
short arr_26 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -1455410562;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = -1212718574;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned short)3004;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 890199274U : 2510261596U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 17900266026391913289ULL : 741006784415453490ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = 1048617888;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (short)-21346;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = -8343923438895260364LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 279384092U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 17754101387487620945ULL : 11744280350437777769ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (unsigned short)49477;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 4719811757836695603ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)201 : (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)32152 : (short)6984;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-12113 : (short)-175;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
