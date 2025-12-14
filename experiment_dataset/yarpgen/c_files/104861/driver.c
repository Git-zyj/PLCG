#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)157;
unsigned int var_4 = 1101621305U;
unsigned char var_10 = (unsigned char)110;
short var_11 = (short)-2110;
short var_12 = (short)-22019;
signed char var_14 = (signed char)33;
unsigned char var_15 = (unsigned char)202;
signed char var_17 = (signed char)-16;
int zero = 0;
long long int var_18 = -7261859400569670319LL;
unsigned long long int var_19 = 6185440984697240632ULL;
signed char var_20 = (signed char)13;
int var_21 = 1650296360;
short var_22 = (short)-32233;
_Bool arr_1 [13] [13] ;
unsigned char arr_4 [13] [13] ;
unsigned char arr_6 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)110;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
