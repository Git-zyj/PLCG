#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2552038332022369490ULL;
unsigned long long int var_11 = 2341224544648891768ULL;
unsigned int var_12 = 957257055U;
int zero = 0;
unsigned char var_17 = (unsigned char)250;
unsigned long long int var_18 = 7491200519927258534ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
