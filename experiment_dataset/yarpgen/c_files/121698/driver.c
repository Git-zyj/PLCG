#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1181726390U;
unsigned char var_2 = (unsigned char)147;
unsigned long long int var_12 = 8382631289903540345ULL;
int zero = 0;
signed char var_16 = (signed char)-108;
unsigned long long int var_17 = 7445625493225942651ULL;
void init() {
}

void checksum() {
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
