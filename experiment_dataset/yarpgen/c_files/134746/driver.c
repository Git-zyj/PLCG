#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 332758785614097431ULL;
unsigned char var_1 = (unsigned char)48;
unsigned int var_3 = 3084366462U;
unsigned long long int var_7 = 254550925809703056ULL;
int zero = 0;
unsigned int var_10 = 4189920049U;
unsigned long long int var_11 = 2997122681174596978ULL;
unsigned int var_12 = 1140244478U;
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
