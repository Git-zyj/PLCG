#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1699087429;
signed char var_10 = (signed char)120;
unsigned char var_13 = (unsigned char)157;
int zero = 0;
unsigned char var_14 = (unsigned char)89;
int var_15 = -675637213;
long long int var_16 = -4595598014598891702LL;
void init() {
}

void checksum() {
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
