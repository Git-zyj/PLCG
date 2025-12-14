#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 555780244U;
short var_2 = (short)17711;
unsigned int var_12 = 2599105193U;
int zero = 0;
int var_19 = 1519681238;
long long int var_20 = 6317414791160475991LL;
int var_21 = 138055539;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
