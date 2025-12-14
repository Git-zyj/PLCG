#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1763960406;
unsigned int var_14 = 4192756646U;
int var_15 = 184805249;
int zero = 0;
unsigned long long int var_19 = 13141210245830349560ULL;
unsigned long long int var_20 = 18044335392495361962ULL;
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
