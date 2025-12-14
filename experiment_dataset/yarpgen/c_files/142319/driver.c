#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)12948;
int var_17 = -1747592858;
int zero = 0;
long long int var_20 = 4072866994292788999LL;
unsigned long long int var_21 = 1658424112902499658ULL;
unsigned int var_22 = 360061375U;
unsigned long long int var_23 = 17471757097854915949ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
