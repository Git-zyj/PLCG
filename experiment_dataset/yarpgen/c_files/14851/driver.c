#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5126;
int var_3 = -1746658126;
unsigned int var_6 = 3631698521U;
unsigned char var_10 = (unsigned char)37;
int zero = 0;
unsigned char var_12 = (unsigned char)76;
unsigned int var_13 = 2914481654U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
