#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6571;
unsigned short var_9 = (unsigned short)32969;
unsigned long long int var_13 = 16137762359403051754ULL;
int zero = 0;
signed char var_18 = (signed char)-112;
unsigned char var_19 = (unsigned char)186;
short var_20 = (short)28579;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
