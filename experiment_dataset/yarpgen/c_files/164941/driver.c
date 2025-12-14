#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
short var_1 = (short)19530;
unsigned char var_2 = (unsigned char)5;
unsigned long long int var_3 = 5133772951893984990ULL;
unsigned long long int var_4 = 11180156240123272113ULL;
unsigned short var_5 = (unsigned short)42945;
short var_7 = (short)560;
unsigned char var_8 = (unsigned char)91;
unsigned char var_10 = (unsigned char)24;
unsigned char var_11 = (unsigned char)70;
unsigned long long int var_12 = 10368238890010164532ULL;
unsigned char var_14 = (unsigned char)209;
unsigned int var_15 = 722649549U;
unsigned short var_16 = (unsigned short)60715;
int zero = 0;
int var_18 = -884189131;
unsigned char var_19 = (unsigned char)29;
signed char var_20 = (signed char)86;
unsigned char var_21 = (unsigned char)62;
signed char var_22 = (signed char)53;
unsigned char var_23 = (unsigned char)109;
unsigned int var_24 = 815723427U;
signed char arr_11 [12] [12] [12] ;
int arr_14 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-3 : (signed char)-98;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 712785757 : -1449046999;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
