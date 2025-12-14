#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)155;
unsigned char var_6 = (unsigned char)21;
int var_8 = -880291077;
long long int var_11 = 394312834055281725LL;
int zero = 0;
long long int var_13 = 6221296779437869100LL;
long long int var_14 = 1914160511253367084LL;
unsigned short var_15 = (unsigned short)23485;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
