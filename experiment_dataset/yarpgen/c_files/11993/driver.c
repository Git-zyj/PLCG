#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)103;
unsigned long long int var_4 = 12884768174940196155ULL;
unsigned int var_8 = 464320320U;
signed char var_10 = (signed char)-103;
int zero = 0;
unsigned int var_13 = 2178435363U;
signed char var_14 = (signed char)68;
signed char var_15 = (signed char)(-127 - 1);
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
