#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = 276647324;
unsigned long long int var_6 = 6069120616116206656ULL;
unsigned int var_8 = 3624264642U;
int zero = 0;
signed char var_10 = (signed char)-58;
int var_11 = -535527722;
unsigned char var_12 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
