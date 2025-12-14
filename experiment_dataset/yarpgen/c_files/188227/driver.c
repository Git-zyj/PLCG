#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-24979;
unsigned int var_5 = 2178787050U;
short var_13 = (short)25873;
unsigned char var_16 = (unsigned char)153;
int zero = 0;
unsigned long long int var_20 = 8026911793278308883ULL;
signed char var_21 = (signed char)-97;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
