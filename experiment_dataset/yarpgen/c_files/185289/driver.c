#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4290266954U;
signed char var_5 = (signed char)-28;
signed char var_6 = (signed char)-27;
unsigned char var_7 = (unsigned char)115;
unsigned char var_8 = (unsigned char)46;
int var_15 = -1969791692;
int zero = 0;
unsigned int var_17 = 1272029904U;
unsigned int var_18 = 2443133462U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
