#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 18446194658230602209ULL;
unsigned char var_7 = (unsigned char)66;
unsigned long long int var_8 = 14039936565876224157ULL;
int zero = 0;
signed char var_10 = (signed char)39;
signed char var_11 = (signed char)-52;
unsigned char var_12 = (unsigned char)134;
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
