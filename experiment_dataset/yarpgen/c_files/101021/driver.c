#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27189;
signed char var_4 = (signed char)96;
unsigned long long int var_5 = 10897293451476514783ULL;
int zero = 0;
signed char var_10 = (signed char)27;
short var_11 = (short)4357;
signed char var_12 = (signed char)-32;
short var_13 = (short)-19019;
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
