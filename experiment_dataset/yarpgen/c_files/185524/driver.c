#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17213;
unsigned long long int var_2 = 7595011092408003475ULL;
unsigned char var_4 = (unsigned char)117;
unsigned short var_5 = (unsigned short)9761;
short var_7 = (short)-2368;
unsigned long long int var_8 = 10937228328491333791ULL;
unsigned char var_10 = (unsigned char)226;
unsigned char var_12 = (unsigned char)183;
unsigned char var_16 = (unsigned char)153;
int var_17 = 1405328534;
int var_18 = -1948464;
int zero = 0;
unsigned char var_19 = (unsigned char)209;
signed char var_20 = (signed char)-6;
unsigned char var_21 = (unsigned char)241;
unsigned char var_22 = (unsigned char)242;
unsigned char arr_4 [25] [25] ;
unsigned long long int arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1222164443543351075ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
