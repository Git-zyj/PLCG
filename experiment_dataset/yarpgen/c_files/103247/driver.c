#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2314;
short var_3 = (short)-19803;
signed char var_4 = (signed char)-7;
signed char var_7 = (signed char)18;
int zero = 0;
unsigned long long int var_10 = 9731689681426479227ULL;
int var_11 = 1134405725;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
