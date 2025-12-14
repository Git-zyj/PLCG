#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -313950711;
unsigned long long int var_7 = 10034171100305914465ULL;
unsigned long long int var_9 = 8938846420290463194ULL;
int zero = 0;
int var_10 = -976251940;
signed char var_11 = (signed char)65;
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
