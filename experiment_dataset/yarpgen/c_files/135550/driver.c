#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1684289557U;
unsigned char var_7 = (unsigned char)116;
unsigned char var_11 = (unsigned char)135;
unsigned char var_14 = (unsigned char)192;
int zero = 0;
int var_19 = 1536671367;
unsigned long long int var_20 = 6333676016151890070ULL;
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
