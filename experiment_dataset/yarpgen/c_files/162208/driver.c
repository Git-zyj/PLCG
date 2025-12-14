#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9185;
signed char var_8 = (signed char)43;
unsigned int var_9 = 1523808682U;
int var_16 = -1657899578;
int zero = 0;
unsigned short var_19 = (unsigned short)39682;
unsigned long long int var_20 = 11171866603002710739ULL;
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
