#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4429370521983292432LL;
unsigned long long int var_4 = 1476427238407821790ULL;
unsigned char var_12 = (unsigned char)38;
signed char var_18 = (signed char)119;
int zero = 0;
long long int var_19 = -3509820860336323927LL;
long long int var_20 = 3881028062995016752LL;
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
