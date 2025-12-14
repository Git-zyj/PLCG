#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7817395319389718753LL;
unsigned char var_10 = (unsigned char)57;
short var_14 = (short)24986;
long long int var_16 = -5360208621750593283LL;
int zero = 0;
short var_19 = (short)1257;
unsigned char var_20 = (unsigned char)63;
short var_21 = (short)9627;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
