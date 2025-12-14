#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -3834073391800709111LL;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)63073;
short var_4 = (short)10811;
unsigned char var_6 = (unsigned char)80;
int var_8 = -662108580;
unsigned long long int var_11 = 2520179491542630019ULL;
unsigned char var_14 = (unsigned char)92;
unsigned short var_17 = (unsigned short)47611;
unsigned int var_18 = 3446293256U;
int zero = 0;
signed char var_19 = (signed char)5;
unsigned long long int var_20 = 2524077982288054751ULL;
signed char var_21 = (signed char)-114;
long long int var_22 = -7053489371325817487LL;
unsigned long long int var_23 = 1200370446413083835ULL;
int arr_1 [12] [12] ;
int arr_2 [12] [12] [12] ;
long long int arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 662104539;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1124028939;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = -8006652744858047448LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
