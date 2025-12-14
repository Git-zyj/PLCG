#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3047855490U;
long long int var_7 = 5834808951268405269LL;
unsigned long long int var_8 = 6859571127567016652ULL;
unsigned int var_11 = 2081646171U;
int zero = 0;
int var_14 = 973894481;
unsigned long long int var_15 = 2641879081882784246ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
