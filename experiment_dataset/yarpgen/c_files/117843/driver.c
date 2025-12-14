#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)249;
int var_5 = -118116103;
signed char var_6 = (signed char)-96;
short var_15 = (short)-27118;
unsigned char var_16 = (unsigned char)111;
int zero = 0;
short var_18 = (short)23907;
unsigned long long int var_19 = 15445416387092858340ULL;
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
