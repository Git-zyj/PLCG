#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 15919072342347986165ULL;
unsigned long long int var_12 = 16018353275703016312ULL;
unsigned short var_16 = (unsigned short)52517;
int zero = 0;
int var_18 = 1454169722;
unsigned short var_19 = (unsigned short)22305;
unsigned short var_20 = (unsigned short)56071;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
