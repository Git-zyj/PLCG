#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -880749013;
long long int var_4 = -1557904111426319633LL;
unsigned long long int var_8 = 876325146771645646ULL;
int zero = 0;
unsigned int var_18 = 1251726047U;
int var_19 = 1852348188;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
