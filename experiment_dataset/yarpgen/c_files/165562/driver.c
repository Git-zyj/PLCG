#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1312344660U;
unsigned char var_5 = (unsigned char)87;
unsigned char var_6 = (unsigned char)53;
unsigned long long int var_7 = 7449092732427065596ULL;
unsigned long long int var_11 = 3527006657095005242ULL;
int zero = 0;
unsigned int var_13 = 3742148289U;
unsigned int var_14 = 871961417U;
void init() {
}

void checksum() {
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
