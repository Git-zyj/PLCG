#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -451673819020784156LL;
unsigned int var_3 = 1716657400U;
unsigned int var_5 = 3710521288U;
unsigned char var_12 = (unsigned char)24;
int var_14 = 431443512;
long long int var_15 = -7027771675554900076LL;
int zero = 0;
int var_20 = 527514770;
signed char var_21 = (signed char)47;
short var_22 = (short)-7103;
unsigned char var_23 = (unsigned char)22;
_Bool arr_2 [24] [24] ;
unsigned char arr_4 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)81 : (unsigned char)8;
}

void checksum() {
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
