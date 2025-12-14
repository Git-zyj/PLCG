#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13622785419488945512ULL;
unsigned int var_3 = 452751291U;
unsigned int var_5 = 3831981287U;
unsigned long long int var_8 = 6452340027210272834ULL;
unsigned long long int var_10 = 11018719847925361972ULL;
unsigned int var_11 = 450817033U;
signed char var_13 = (signed char)126;
unsigned int var_17 = 2200594624U;
int zero = 0;
unsigned long long int var_20 = 2768967449049650225ULL;
unsigned long long int var_21 = 6611265524379282850ULL;
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
