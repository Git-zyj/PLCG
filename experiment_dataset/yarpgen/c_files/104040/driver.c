#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11881;
signed char var_5 = (signed char)41;
signed char var_7 = (signed char)-81;
unsigned int var_11 = 3073680682U;
signed char var_12 = (signed char)75;
int zero = 0;
signed char var_17 = (signed char)-121;
signed char var_18 = (signed char)33;
unsigned int var_19 = 2051056518U;
int var_20 = 1492316533;
signed char arr_0 [17] ;
signed char arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-124 : (signed char)22;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
