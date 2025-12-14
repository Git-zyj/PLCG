#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -516421521;
int var_6 = 2011277546;
unsigned long long int var_10 = 17886412145429807464ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)21702;
long long int var_12 = 4007228787638890481LL;
unsigned int var_13 = 4008804662U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
