#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13369934927187382758ULL;
unsigned char var_13 = (unsigned char)101;
unsigned char var_14 = (unsigned char)52;
int zero = 0;
short var_19 = (short)28350;
long long int var_20 = -7319353676520280615LL;
void init() {
}

void checksum() {
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
