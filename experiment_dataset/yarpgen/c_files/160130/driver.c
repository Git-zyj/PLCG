#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6177653209047544966ULL;
unsigned short var_5 = (unsigned short)50746;
long long int var_6 = -8202289251911244464LL;
unsigned long long int var_10 = 8215332706169355540ULL;
unsigned short var_11 = (unsigned short)4385;
unsigned long long int var_12 = 9875627423941467656ULL;
int zero = 0;
long long int var_15 = 8177753645300264141LL;
unsigned short var_16 = (unsigned short)59253;
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
