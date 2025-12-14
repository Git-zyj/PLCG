#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-6662;
unsigned char var_11 = (unsigned char)184;
unsigned char var_16 = (unsigned char)233;
signed char var_17 = (signed char)-6;
int zero = 0;
unsigned long long int var_18 = 12180573235829111219ULL;
unsigned short var_19 = (unsigned short)3283;
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
