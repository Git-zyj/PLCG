#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)45;
unsigned char var_7 = (unsigned char)16;
unsigned int var_11 = 3502230836U;
int zero = 0;
unsigned int var_15 = 1692043033U;
unsigned long long int var_16 = 6377173529196580078ULL;
unsigned long long int var_17 = 1633967815216084737ULL;
long long int var_18 = -352584723931818357LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
