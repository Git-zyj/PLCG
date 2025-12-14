#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)15387;
signed char var_16 = (signed char)112;
short var_18 = (short)9471;
int zero = 0;
signed char var_20 = (signed char)(-127 - 1);
unsigned long long int var_21 = 5319920056440110433ULL;
unsigned char var_22 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
