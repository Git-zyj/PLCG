#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3280117467858976132ULL;
unsigned char var_7 = (unsigned char)60;
int var_10 = -433933580;
unsigned long long int var_12 = 2455895881232979430ULL;
int var_15 = 578172427;
unsigned long long int var_18 = 4725079909514778454ULL;
int zero = 0;
long long int var_20 = 2842590493223842097LL;
int var_21 = 1800532245;
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
