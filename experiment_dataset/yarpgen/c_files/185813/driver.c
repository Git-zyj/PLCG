#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)64;
unsigned short var_2 = (unsigned short)55212;
unsigned short var_5 = (unsigned short)25016;
unsigned char var_6 = (unsigned char)161;
int var_7 = 491865837;
short var_9 = (short)15095;
unsigned int var_10 = 173405211U;
unsigned char var_11 = (unsigned char)74;
unsigned long long int var_12 = 2713528511845377665ULL;
long long int var_14 = 3361841863645323663LL;
signed char var_15 = (signed char)55;
unsigned int var_16 = 2389230805U;
unsigned long long int var_17 = 5944048221833957941ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)188;
signed char var_21 = (signed char)115;
unsigned short var_22 = (unsigned short)14190;
unsigned int var_23 = 1819138719U;
unsigned long long int var_24 = 2633661197211889092ULL;
short arr_13 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)6574 : (short)17531;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
