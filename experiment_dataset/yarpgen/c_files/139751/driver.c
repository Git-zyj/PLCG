#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2055597343;
unsigned short var_2 = (unsigned short)55834;
unsigned int var_4 = 3709820070U;
unsigned int var_5 = 2194580509U;
unsigned long long int var_6 = 16094550306239493673ULL;
int var_11 = -2042044890;
signed char var_14 = (signed char)-2;
int zero = 0;
int var_20 = -544760972;
unsigned int var_21 = 2282506882U;
short var_22 = (short)-1791;
unsigned short var_23 = (unsigned short)18493;
unsigned short var_24 = (unsigned short)23016;
signed char arr_0 [13] ;
unsigned short arr_1 [13] [13] ;
unsigned short arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)33116;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)59155;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
