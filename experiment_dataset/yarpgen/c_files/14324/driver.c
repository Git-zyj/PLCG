#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1610884313U;
signed char var_5 = (signed char)-40;
signed char var_7 = (signed char)-89;
signed char var_10 = (signed char)-40;
int zero = 0;
unsigned long long int var_12 = 2553553271594906771ULL;
signed char var_13 = (signed char)109;
unsigned short var_14 = (unsigned short)44993;
unsigned long long int var_15 = 1449745498171391608ULL;
signed char var_16 = (signed char)-105;
signed char arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)60 : (signed char)6;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
