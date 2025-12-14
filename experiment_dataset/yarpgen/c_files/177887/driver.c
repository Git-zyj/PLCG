#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15177411489893108107ULL;
unsigned long long int var_1 = 11257239061084992114ULL;
unsigned short var_2 = (unsigned short)23491;
signed char var_3 = (signed char)63;
unsigned short var_5 = (unsigned short)23706;
unsigned long long int var_9 = 11934588021661650341ULL;
long long int var_10 = 8395567067113809257LL;
unsigned short var_11 = (unsigned short)6657;
long long int var_12 = 3994293240935605551LL;
signed char var_13 = (signed char)29;
int zero = 0;
long long int var_14 = 1882947977247145559LL;
unsigned long long int var_15 = 8407379667110286498ULL;
unsigned short var_16 = (unsigned short)40857;
signed char var_17 = (signed char)-111;
unsigned long long int arr_0 [16] [16] ;
unsigned short arr_2 [16] ;
unsigned short arr_6 [18] ;
unsigned long long int arr_7 [18] ;
long long int arr_4 [16] ;
long long int arr_5 [16] [16] ;
unsigned short arr_8 [18] [18] ;
long long int arr_9 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 15352972385279894694ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)40679;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned short)23498;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 7658270630062707127ULL : 1249069912113930806ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -9107053023936164890LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 4333147678908795350LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)56029 : (unsigned short)46343;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? -5624444545331827859LL : -5719678072500691043LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
