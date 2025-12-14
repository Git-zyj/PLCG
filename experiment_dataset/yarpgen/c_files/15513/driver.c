#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13862780614525475488ULL;
unsigned long long int var_11 = 8039269927902586914ULL;
signed char var_17 = (signed char)-30;
int zero = 0;
short var_18 = (short)-27296;
unsigned short var_19 = (unsigned short)7075;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
