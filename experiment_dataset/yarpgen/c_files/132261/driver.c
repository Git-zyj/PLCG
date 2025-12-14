#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1778088892U;
int var_11 = -1836758457;
int zero = 0;
long long int var_12 = 923554382479373304LL;
unsigned long long int var_13 = 3579240472760670344ULL;
long long int var_14 = -5528262044133806651LL;
unsigned long long int var_15 = 11907964655348813747ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
