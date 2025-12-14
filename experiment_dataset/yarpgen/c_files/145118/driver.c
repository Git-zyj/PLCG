#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 5918791760948179230ULL;
unsigned int var_5 = 3979606337U;
signed char var_7 = (signed char)-48;
int zero = 0;
unsigned char var_10 = (unsigned char)103;
short var_11 = (short)-3224;
unsigned int var_12 = 1760882301U;
signed char var_13 = (signed char)-7;
unsigned int var_14 = 609794548U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
