#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)235;
int var_1 = 1950544114;
int var_2 = 685677905;
int var_7 = -1917996287;
unsigned char var_8 = (unsigned char)13;
unsigned char var_9 = (unsigned char)162;
int var_10 = 1151158245;
int zero = 0;
unsigned int var_14 = 1514598506U;
int var_15 = 1621320121;
void init() {
}

void checksum() {
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
