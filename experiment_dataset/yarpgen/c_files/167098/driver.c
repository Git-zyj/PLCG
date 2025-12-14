#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 301078819U;
unsigned int var_13 = 2512190825U;
unsigned short var_14 = (unsigned short)61921;
unsigned char var_15 = (unsigned char)77;
unsigned int var_18 = 1746052330U;
int zero = 0;
unsigned char var_20 = (unsigned char)22;
unsigned char var_21 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
