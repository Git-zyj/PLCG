#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 170360661U;
unsigned int var_6 = 219939858U;
int var_7 = -417448122;
signed char var_8 = (signed char)-68;
int zero = 0;
unsigned int var_10 = 2231363771U;
signed char var_11 = (signed char)32;
unsigned long long int var_12 = 6636367214249569586ULL;
short var_13 = (short)-5771;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
