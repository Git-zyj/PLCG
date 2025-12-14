#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5704784244996707537LL;
long long int var_1 = 3324175535168049063LL;
unsigned int var_2 = 2188652259U;
unsigned long long int var_5 = 2942307520802479622ULL;
signed char var_8 = (signed char)-103;
unsigned int var_10 = 2818737576U;
int var_11 = 452224529;
unsigned long long int var_13 = 10538185943774208644ULL;
int zero = 0;
unsigned int var_14 = 3234223499U;
short var_15 = (short)-1719;
int var_16 = -450416549;
short var_17 = (short)-4349;
unsigned int var_18 = 1494582607U;
unsigned short arr_5 [12] ;
unsigned char arr_6 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)62998 : (unsigned short)41333;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)225 : (unsigned char)238;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
