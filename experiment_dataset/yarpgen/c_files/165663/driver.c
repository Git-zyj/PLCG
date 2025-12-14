#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7420816183493647847ULL;
unsigned int var_5 = 443506542U;
unsigned char var_15 = (unsigned char)63;
unsigned int var_16 = 620752182U;
int zero = 0;
unsigned int var_17 = 2234748543U;
unsigned int var_18 = 1358214377U;
unsigned char var_19 = (unsigned char)196;
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
