#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1171288011U;
unsigned int var_9 = 422234110U;
signed char var_10 = (signed char)30;
int zero = 0;
unsigned char var_13 = (unsigned char)142;
signed char var_14 = (signed char)97;
unsigned char var_15 = (unsigned char)104;
void init() {
}

void checksum() {
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
