#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3608994121U;
unsigned long long int var_11 = 16205290861214620260ULL;
signed char var_16 = (signed char)27;
int zero = 0;
signed char var_17 = (signed char)51;
short var_18 = (short)-16882;
int var_19 = 80009747;
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
