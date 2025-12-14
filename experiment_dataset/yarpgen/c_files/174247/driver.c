#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50467;
short var_1 = (short)13904;
unsigned short var_3 = (unsigned short)55036;
signed char var_5 = (signed char)-48;
int var_9 = -1531562445;
long long int var_10 = 7112089651141665046LL;
int var_11 = 472578725;
unsigned long long int var_15 = 1652609138052260625ULL;
unsigned long long int var_16 = 7103776232286930585ULL;
short var_17 = (short)9499;
int zero = 0;
unsigned long long int var_20 = 8620297061473888844ULL;
unsigned short var_21 = (unsigned short)16054;
unsigned long long int var_22 = 5205930770418648428ULL;
signed char var_23 = (signed char)-29;
signed char var_24 = (signed char)124;
signed char var_25 = (signed char)59;
long long int var_26 = 5796592973562721883LL;
int var_27 = 159598474;
unsigned short var_28 = (unsigned short)33065;
unsigned char arr_4 [11] ;
signed char arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)8 : (signed char)13;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
