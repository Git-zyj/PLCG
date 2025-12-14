#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -631612895;
signed char var_2 = (signed char)39;
unsigned short var_12 = (unsigned short)5209;
unsigned char var_13 = (unsigned char)47;
int zero = 0;
int var_16 = -1524226662;
unsigned int var_17 = 2790547801U;
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
