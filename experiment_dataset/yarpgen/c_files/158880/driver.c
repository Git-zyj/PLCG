#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 609635185U;
unsigned int var_1 = 1172875272U;
unsigned char var_2 = (unsigned char)93;
short var_4 = (short)-27472;
unsigned char var_5 = (unsigned char)141;
unsigned short var_6 = (unsigned short)43014;
unsigned char var_7 = (unsigned char)134;
long long int var_8 = -4759533010899998437LL;
long long int var_9 = 765393001735447685LL;
int zero = 0;
int var_10 = 1829180091;
long long int var_11 = 3731989139563027237LL;
unsigned long long int var_12 = 6399670870822829443ULL;
int var_13 = 39093306;
long long int var_14 = -9068554877443253548LL;
unsigned short var_15 = (unsigned short)15941;
unsigned short var_16 = (unsigned short)64378;
unsigned short arr_3 [17] [17] ;
unsigned int arr_4 [17] ;
unsigned int arr_7 [14] [14] ;
long long int arr_10 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)38931;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 537471356U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 3087907537U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 8240601847512015207LL : 1533105079421749444LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
