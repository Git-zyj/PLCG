#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8004;
unsigned char var_1 = (unsigned char)166;
unsigned char var_2 = (unsigned char)95;
int var_6 = 895685087;
short var_7 = (short)1643;
signed char var_9 = (signed char)-110;
short var_11 = (short)-20008;
int zero = 0;
signed char var_12 = (signed char)-89;
signed char var_13 = (signed char)-83;
short var_14 = (short)28312;
unsigned char var_15 = (unsigned char)208;
signed char var_16 = (signed char)25;
signed char arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-100;
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
