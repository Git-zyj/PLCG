#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1460;
short var_6 = (short)6825;
long long int var_7 = -1522205259273232862LL;
long long int var_9 = 7292867442802502531LL;
short var_10 = (short)1481;
int zero = 0;
short var_11 = (short)12049;
short var_12 = (short)13851;
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
