#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)377;
unsigned short var_7 = (unsigned short)48910;
unsigned long long int var_11 = 4897276659370816715ULL;
int zero = 0;
unsigned int var_20 = 3748308296U;
unsigned int var_21 = 3411429449U;
unsigned char var_22 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
