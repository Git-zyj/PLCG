#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1289817854U;
long long int var_4 = 3859676486763631550LL;
unsigned int var_7 = 2126047142U;
int zero = 0;
long long int var_10 = -5439060931567119370LL;
long long int var_11 = 5135391248108526286LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
