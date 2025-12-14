#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 14156422;
long long int var_7 = -2296237042959044383LL;
int var_9 = 1239639285;
int zero = 0;
int var_11 = -1414807461;
int var_12 = -843514069;
int var_13 = 550232060;
int var_14 = -1928365310;
unsigned char var_15 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
