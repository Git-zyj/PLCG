#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14347;
int var_4 = 1648742661;
unsigned char var_9 = (unsigned char)93;
long long int var_12 = -3781585423804081267LL;
unsigned char var_17 = (unsigned char)200;
int zero = 0;
int var_18 = -1827549067;
signed char var_19 = (signed char)71;
unsigned int var_20 = 3347748353U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
