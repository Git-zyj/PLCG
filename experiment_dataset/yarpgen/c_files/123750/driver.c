#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18483;
unsigned short var_11 = (unsigned short)52988;
unsigned char var_14 = (unsigned char)105;
int zero = 0;
signed char var_16 = (signed char)-95;
unsigned short var_17 = (unsigned short)5127;
unsigned short var_18 = (unsigned short)64070;
unsigned int var_19 = 2152473571U;
unsigned int var_20 = 661478329U;
unsigned int arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1414446013U;
}

void checksum() {
    hash(&seed, var_16);
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
