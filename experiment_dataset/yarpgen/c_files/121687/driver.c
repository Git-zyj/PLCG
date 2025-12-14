#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-430;
unsigned int var_11 = 1879493234U;
unsigned int var_13 = 2700191009U;
signed char var_15 = (signed char)-5;
int zero = 0;
int var_16 = 1913611117;
unsigned char var_17 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
