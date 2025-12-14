#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -446079816;
short var_7 = (short)-1929;
long long int var_8 = 7219766492615368494LL;
unsigned char var_9 = (unsigned char)185;
int zero = 0;
unsigned char var_11 = (unsigned char)67;
signed char var_12 = (signed char)-96;
void init() {
}

void checksum() {
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
