#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1321066141U;
short var_3 = (short)-30779;
unsigned int var_4 = 506906342U;
unsigned long long int var_9 = 1095060942938860323ULL;
unsigned long long int var_10 = 9381852266510311302ULL;
long long int var_12 = -8877270432206358849LL;
short var_16 = (short)-11837;
int zero = 0;
unsigned char var_20 = (unsigned char)117;
unsigned char var_21 = (unsigned char)170;
unsigned long long int var_22 = 6160251698295094127ULL;
unsigned int arr_3 [16] [16] [16] ;
unsigned char arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2284087929U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)54;
}

void checksum() {
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
