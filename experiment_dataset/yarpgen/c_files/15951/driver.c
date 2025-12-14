#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4573213748199663346LL;
long long int var_4 = -5196360978869034547LL;
short var_10 = (short)12845;
int zero = 0;
short var_12 = (short)25881;
unsigned int var_13 = 796263905U;
unsigned char var_14 = (unsigned char)133;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
