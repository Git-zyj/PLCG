#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 3668989607U;
unsigned int var_10 = 1299225430U;
unsigned char var_13 = (unsigned char)12;
unsigned char var_14 = (unsigned char)6;
int var_15 = -1477222972;
unsigned long long int var_16 = 719145015768850471ULL;
int zero = 0;
signed char var_20 = (signed char)-76;
int var_21 = -363178336;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
