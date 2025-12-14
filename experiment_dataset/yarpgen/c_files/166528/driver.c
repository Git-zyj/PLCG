#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)124;
int var_4 = 659827585;
unsigned int var_10 = 1467790674U;
int var_13 = -1998362491;
int zero = 0;
signed char var_16 = (signed char)-44;
long long int var_17 = -1875846309287322945LL;
int var_18 = 1628548679;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
