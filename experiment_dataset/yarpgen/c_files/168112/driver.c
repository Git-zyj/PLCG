#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6864426996726976425LL;
unsigned char var_3 = (unsigned char)13;
unsigned long long int var_18 = 18233786652180480788ULL;
int zero = 0;
unsigned long long int var_20 = 12089490090273500952ULL;
short var_21 = (short)-18202;
void init() {
}

void checksum() {
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
