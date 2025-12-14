#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-83;
unsigned int var_1 = 2181005682U;
unsigned int var_2 = 529258986U;
unsigned short var_3 = (unsigned short)10470;
int var_4 = -1727149504;
int var_5 = 2029892697;
unsigned long long int var_6 = 16691582147883432084ULL;
short var_7 = (short)6504;
int var_8 = -1322720544;
long long int var_9 = -3034243875245812557LL;
unsigned short var_10 = (unsigned short)63683;
long long int var_11 = -2686813332909381565LL;
signed char var_12 = (signed char)26;
int zero = 0;
signed char var_13 = (signed char)-72;
unsigned char var_14 = (unsigned char)93;
unsigned short var_15 = (unsigned short)64908;
int var_16 = 1171258574;
unsigned char var_17 = (unsigned char)191;
unsigned char var_18 = (unsigned char)147;
unsigned short var_19 = (unsigned short)22043;
long long int var_20 = 1477138723260763348LL;
signed char var_21 = (signed char)-101;
short var_22 = (short)5002;
unsigned short var_23 = (unsigned short)30113;
unsigned char var_24 = (unsigned char)167;
signed char var_25 = (signed char)88;
long long int var_26 = -47565631494177249LL;
unsigned char var_27 = (unsigned char)72;
_Bool arr_0 [16] ;
unsigned short arr_1 [16] [16] ;
short arr_2 [16] [16] ;
int arr_4 [18] [18] ;
_Bool arr_5 [18] ;
unsigned int arr_6 [25] ;
short arr_7 [25] ;
long long int arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)37779;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (short)12587;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = -388426485;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 2697039911U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (short)16704;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 6247950243062693963LL;
}

void checksum() {
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
