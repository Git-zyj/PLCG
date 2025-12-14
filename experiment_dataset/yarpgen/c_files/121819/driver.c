#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)192;
unsigned long long int var_7 = 769708405807931344ULL;
unsigned short var_8 = (unsigned short)16586;
unsigned char var_15 = (unsigned char)223;
int zero = 0;
signed char var_17 = (signed char)-41;
unsigned char var_18 = (unsigned char)182;
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
