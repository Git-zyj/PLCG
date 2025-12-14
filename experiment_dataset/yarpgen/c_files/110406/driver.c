#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1848179147U;
unsigned short var_8 = (unsigned short)8344;
short var_9 = (short)32594;
unsigned long long int var_10 = 6906991683002104678ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)135;
short var_12 = (short)-5303;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
