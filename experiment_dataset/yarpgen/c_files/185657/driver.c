#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2408283039U;
unsigned char var_5 = (unsigned char)47;
int zero = 0;
unsigned char var_12 = (unsigned char)88;
signed char var_13 = (signed char)0;
int var_14 = -410989004;
int var_15 = -1924354269;
unsigned long long int var_16 = 1103057142767017619ULL;
void init() {
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
