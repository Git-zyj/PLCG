#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)38;
unsigned char var_3 = (unsigned char)21;
unsigned long long int var_4 = 1114043398641882114ULL;
unsigned long long int var_5 = 7129982388447461999ULL;
unsigned short var_6 = (unsigned short)61053;
int var_7 = 210013670;
unsigned char var_10 = (unsigned char)186;
unsigned char var_11 = (unsigned char)168;
int zero = 0;
int var_13 = -594717247;
long long int var_14 = 3940134963631345878LL;
int var_15 = 738374437;
short var_16 = (short)-18021;
unsigned char var_17 = (unsigned char)202;
unsigned int var_18 = 3577194279U;
unsigned char var_19 = (unsigned char)178;
unsigned long long int var_20 = 14169934711950851834ULL;
unsigned char var_21 = (unsigned char)151;
short var_22 = (short)-29956;
unsigned int var_23 = 3463879382U;
int arr_0 [17] ;
int arr_3 [25] ;
unsigned char arr_4 [25] ;
unsigned char arr_5 [25] ;
short arr_2 [17] ;
short arr_10 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1586651645;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1506791494 : -425460474;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)-386;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (short)2559;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
