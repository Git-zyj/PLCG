#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 951802116;
int var_1 = -1960071793;
unsigned int var_2 = 221867291U;
signed char var_3 = (signed char)-76;
unsigned int var_5 = 1429676821U;
unsigned char var_9 = (unsigned char)78;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 14528545280688111005ULL;
int zero = 0;
int var_12 = 575915466;
unsigned long long int var_13 = 9045907557805681930ULL;
unsigned int var_14 = 1789032446U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
