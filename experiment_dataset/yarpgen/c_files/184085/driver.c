#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)121;
unsigned long long int var_1 = 8328331247668946381ULL;
long long int var_2 = 7843549964934915861LL;
signed char var_3 = (signed char)-34;
unsigned short var_4 = (unsigned short)61604;
signed char var_5 = (signed char)100;
unsigned long long int var_6 = 13018553465342284283ULL;
long long int var_7 = 3271975703197235552LL;
unsigned long long int var_8 = 3075003293760866771ULL;
short var_9 = (short)29081;
int zero = 0;
unsigned long long int var_10 = 8216966842465278552ULL;
unsigned long long int var_11 = 5168198765082093121ULL;
unsigned short var_12 = (unsigned short)10568;
unsigned long long int var_13 = 1161831362709431820ULL;
unsigned int var_14 = 2419451687U;
short var_15 = (short)853;
short var_16 = (short)-17123;
unsigned int var_17 = 3156201374U;
signed char var_18 = (signed char)-32;
unsigned int var_19 = 3688983944U;
unsigned int var_20 = 813318189U;
unsigned long long int var_21 = 11470809164691925308ULL;
unsigned long long int var_22 = 17753836896284716107ULL;
short arr_1 [15] [15] ;
unsigned int arr_2 [15] [15] ;
signed char arr_8 [12] ;
signed char arr_12 [12] [12] [12] ;
unsigned long long int arr_14 [12] [12] ;
unsigned int arr_15 [12] [12] [12] ;
_Bool arr_3 [15] ;
long long int arr_6 [12] ;
unsigned short arr_16 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-26737;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 1282429640U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = 971350548584936893ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 1140290547U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -540526660241968096LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (unsigned short)4046;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
