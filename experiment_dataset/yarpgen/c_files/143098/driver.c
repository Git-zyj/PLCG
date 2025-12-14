#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)73;
unsigned int var_2 = 1863389408U;
short var_7 = (short)-20029;
signed char var_9 = (signed char)-1;
unsigned short var_10 = (unsigned short)51400;
signed char var_12 = (signed char)-76;
int zero = 0;
unsigned short var_16 = (unsigned short)41386;
unsigned long long int var_17 = 18377063888794796860ULL;
long long int var_18 = -3704899268124540891LL;
signed char var_19 = (signed char)-112;
int var_20 = 1442920438;
int var_21 = -444625894;
unsigned short arr_0 [16] ;
signed char arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)34844;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)95 : (signed char)-18;
}

void checksum() {
    hash(&seed, var_16);
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
