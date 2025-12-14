#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)74;
unsigned char var_3 = (unsigned char)249;
signed char var_10 = (signed char)78;
unsigned int var_12 = 2702742199U;
signed char var_15 = (signed char)96;
int zero = 0;
unsigned int var_20 = 2400775862U;
unsigned char var_21 = (unsigned char)250;
short var_22 = (short)-29231;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
