#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)92;
long long int var_10 = -6891986880203309832LL;
unsigned long long int var_12 = 17835552168258033885ULL;
int zero = 0;
unsigned long long int var_19 = 6166813540841437699ULL;
unsigned char var_20 = (unsigned char)207;
void init() {
}

void checksum() {
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
