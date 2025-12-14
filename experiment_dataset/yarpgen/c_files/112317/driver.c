#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6115000545387775337ULL;
long long int var_2 = -8027907437415512297LL;
unsigned char var_11 = (unsigned char)163;
int zero = 0;
long long int var_12 = -5110236676190926384LL;
signed char var_13 = (signed char)-16;
int var_14 = 372153344;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
