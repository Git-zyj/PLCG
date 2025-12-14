#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 1867674481748054264LL;
unsigned long long int var_8 = 5514185384644077014ULL;
unsigned short var_9 = (unsigned short)4691;
int zero = 0;
unsigned char var_10 = (unsigned char)96;
int var_11 = -1268083527;
unsigned int var_12 = 364601104U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
