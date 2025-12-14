#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)7403;
unsigned long long int var_12 = 576378805026316630ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)199;
long long int var_21 = 748260315802906007LL;
long long int var_22 = -9167908192819822536LL;
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
