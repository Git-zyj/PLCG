#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14204167932365118093ULL;
int var_3 = 2055384232;
_Bool var_5 = (_Bool)0;
long long int var_11 = 7216230122147644521LL;
int zero = 0;
long long int var_14 = 5328574152486723460LL;
unsigned long long int var_15 = 1486328170054836707ULL;
int var_16 = -1334637728;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
