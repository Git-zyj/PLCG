#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6761;
short var_4 = (short)-28991;
unsigned long long int var_6 = 9364523912218707717ULL;
int zero = 0;
signed char var_13 = (signed char)-10;
unsigned short var_14 = (unsigned short)42660;
unsigned int var_15 = 1305620986U;
unsigned long long int var_16 = 3725386318116445320ULL;
_Bool var_17 = (_Bool)0;
unsigned short arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)34510;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
