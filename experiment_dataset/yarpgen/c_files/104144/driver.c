#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3354052836198823486LL;
unsigned long long int var_7 = 14179416404340014934ULL;
int var_11 = -713432471;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -1948333733;
unsigned short var_14 = (unsigned short)7898;
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
