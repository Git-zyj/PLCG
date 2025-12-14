#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14085938393866183982ULL;
signed char var_3 = (signed char)103;
signed char var_4 = (signed char)53;
unsigned char var_7 = (unsigned char)124;
short var_11 = (short)-17632;
unsigned char var_12 = (unsigned char)143;
int zero = 0;
int var_13 = 22768374;
unsigned long long int var_14 = 15737901714169771455ULL;
signed char var_15 = (signed char)79;
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
