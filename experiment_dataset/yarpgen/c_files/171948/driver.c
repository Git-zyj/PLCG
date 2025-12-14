#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1606642560;
long long int var_10 = 4552421541056650931LL;
unsigned char var_11 = (unsigned char)28;
int zero = 0;
unsigned char var_15 = (unsigned char)252;
short var_16 = (short)13305;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
