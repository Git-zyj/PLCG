#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 3511130820368695830LL;
unsigned long long int var_11 = 9423678523309844635ULL;
int zero = 0;
unsigned long long int var_13 = 17082277836249569791ULL;
unsigned long long int var_14 = 16179588820057752612ULL;
void init() {
}

void checksum() {
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
