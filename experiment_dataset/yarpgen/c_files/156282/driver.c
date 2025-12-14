#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-101;
signed char var_5 = (signed char)52;
signed char var_6 = (signed char)-14;
unsigned char var_8 = (unsigned char)97;
int zero = 0;
int var_14 = -583708277;
int var_15 = 1001284607;
int var_16 = 2009300324;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
