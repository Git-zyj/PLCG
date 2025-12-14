#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2912341716U;
short var_5 = (short)-18221;
unsigned int var_13 = 2392118679U;
short var_14 = (short)25236;
int zero = 0;
unsigned int var_15 = 2631674786U;
signed char var_16 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
