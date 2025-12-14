#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23911;
_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 16636988847970609063ULL;
int zero = 0;
unsigned long long int var_19 = 9010653167662411221ULL;
long long int var_20 = 8055950723401201191LL;
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
