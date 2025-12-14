#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3638599149U;
unsigned long long int var_4 = 1862251493340363293ULL;
unsigned int var_14 = 2880543401U;
unsigned char var_18 = (unsigned char)218;
unsigned int var_19 = 972169746U;
int zero = 0;
unsigned int var_20 = 1423914183U;
unsigned int var_21 = 1083897178U;
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
