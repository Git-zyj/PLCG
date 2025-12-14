#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)207;
unsigned int var_1 = 509752037U;
unsigned char var_3 = (unsigned char)56;
int var_6 = -1831623350;
signed char var_8 = (signed char)74;
signed char var_10 = (signed char)111;
int zero = 0;
signed char var_12 = (signed char)63;
unsigned int var_13 = 3044598082U;
unsigned long long int var_14 = 10604276866338382570ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
