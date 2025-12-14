#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)251;
signed char var_12 = (signed char)114;
short var_17 = (short)-11590;
unsigned long long int var_19 = 17680813940434939735ULL;
int zero = 0;
long long int var_20 = -713380929739021459LL;
unsigned int var_21 = 1034471611U;
unsigned char var_22 = (unsigned char)124;
long long int var_23 = 1657447825266632475LL;
unsigned int var_24 = 365984250U;
short var_25 = (short)-21398;
unsigned short arr_0 [25] [25] ;
unsigned char arr_1 [25] ;
int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)42912;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -95151609;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
