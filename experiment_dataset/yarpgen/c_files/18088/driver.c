#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4199441081U;
unsigned int var_5 = 579502039U;
signed char var_7 = (signed char)-45;
unsigned int var_8 = 1837500055U;
unsigned long long int var_12 = 17033667129201336862ULL;
unsigned long long int var_13 = 10886467049620911827ULL;
short var_15 = (short)-26858;
int zero = 0;
signed char var_17 = (signed char)-3;
int var_18 = -738697986;
unsigned char var_19 = (unsigned char)69;
unsigned int var_20 = 2743355647U;
unsigned int var_21 = 63764624U;
signed char arr_1 [23] ;
unsigned int arr_3 [23] [23] ;
_Bool arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 452993721U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
