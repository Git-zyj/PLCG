#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2662643604161747788ULL;
unsigned int var_5 = 825765001U;
unsigned long long int var_14 = 8939226190429967202ULL;
int zero = 0;
int var_17 = 1817323308;
long long int var_18 = -6694388144779801895LL;
unsigned short var_19 = (unsigned short)21391;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
