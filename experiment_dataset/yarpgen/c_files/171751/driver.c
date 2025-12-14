#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 709007724U;
unsigned char var_4 = (unsigned char)167;
unsigned int var_7 = 1516295907U;
signed char var_12 = (signed char)73;
signed char var_13 = (signed char)-49;
int zero = 0;
short var_14 = (short)-14684;
int var_15 = 405276068;
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
