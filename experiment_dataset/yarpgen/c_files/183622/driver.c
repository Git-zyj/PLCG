#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6152;
short var_3 = (short)-3826;
short var_6 = (short)-15863;
unsigned char var_15 = (unsigned char)94;
int zero = 0;
unsigned int var_17 = 4271074876U;
short var_18 = (short)-25006;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
