#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3647825072915223731ULL;
signed char var_5 = (signed char)-114;
short var_9 = (short)26553;
int zero = 0;
short var_13 = (short)12874;
unsigned short var_14 = (unsigned short)38566;
short var_15 = (short)-19925;
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
