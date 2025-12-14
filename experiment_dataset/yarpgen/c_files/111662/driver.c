#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
signed char var_4 = (signed char)-125;
unsigned short var_8 = (unsigned short)58701;
unsigned char var_9 = (unsigned char)210;
int zero = 0;
signed char var_10 = (signed char)-114;
short var_11 = (short)11480;
unsigned long long int var_12 = 3798327321900517682ULL;
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
