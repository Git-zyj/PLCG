#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)3880;
unsigned int var_5 = 1508433707U;
unsigned char var_7 = (unsigned char)25;
long long int var_9 = 8343370730139389713LL;
int zero = 0;
unsigned short var_11 = (unsigned short)24123;
unsigned int var_12 = 391404808U;
unsigned long long int var_13 = 9551922560953270592ULL;
unsigned int var_14 = 1561125232U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
