#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17955;
unsigned int var_3 = 844107008U;
signed char var_14 = (signed char)62;
unsigned char var_15 = (unsigned char)37;
int zero = 0;
signed char var_17 = (signed char)-14;
unsigned char var_18 = (unsigned char)57;
unsigned char var_19 = (unsigned char)231;
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
