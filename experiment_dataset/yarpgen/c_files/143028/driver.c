#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12988641163983812776ULL;
unsigned int var_2 = 11629950U;
unsigned long long int var_3 = 6076142744213198851ULL;
unsigned char var_5 = (unsigned char)21;
signed char var_6 = (signed char)20;
signed char var_7 = (signed char)96;
int zero = 0;
unsigned long long int var_11 = 8164557173688426031ULL;
unsigned int var_12 = 1405115958U;
void init() {
}

void checksum() {
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
