#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4381667293029012267LL;
signed char var_6 = (signed char)-4;
int zero = 0;
unsigned short var_15 = (unsigned short)7317;
unsigned long long int var_16 = 3167597472216851350ULL;
unsigned long long int var_17 = 13766622290914265218ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
