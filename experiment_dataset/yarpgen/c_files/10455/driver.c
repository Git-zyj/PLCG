#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2213095788U;
unsigned int var_2 = 2808351180U;
unsigned short var_3 = (unsigned short)50105;
unsigned char var_5 = (unsigned char)121;
unsigned int var_6 = 1810419033U;
signed char var_7 = (signed char)52;
long long int var_8 = 4563237354018354625LL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)183;
int zero = 0;
long long int var_11 = -6208258021393431036LL;
unsigned int var_12 = 3953876584U;
unsigned int var_13 = 2616885030U;
unsigned char var_14 = (unsigned char)35;
unsigned int var_15 = 1016629973U;
unsigned int var_16 = 1540816881U;
signed char var_17 = (signed char)58;
unsigned long long int var_18 = 9890503263793252687ULL;
signed char arr_1 [17] ;
_Bool arr_2 [17] ;
short arr_3 [17] [17] [17] ;
long long int arr_6 [14] [14] ;
int arr_7 [14] [14] ;
_Bool arr_9 [14] ;
unsigned short arr_10 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-19807 : (short)-21672;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 9195562366793527627LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 1668610397;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)19267 : (unsigned short)56402;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
