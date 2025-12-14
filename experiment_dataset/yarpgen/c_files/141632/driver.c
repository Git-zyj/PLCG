#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)105;
int var_11 = -1842306158;
unsigned int var_12 = 4008038765U;
short var_16 = (short)-6066;
int zero = 0;
unsigned long long int var_17 = 5779426007808775489ULL;
unsigned long long int var_18 = 8749590229097300139ULL;
unsigned long long int var_19 = 4771608104323423872ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
