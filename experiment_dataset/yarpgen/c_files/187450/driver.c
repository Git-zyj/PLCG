#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 662800673755672193LL;
long long int var_2 = -6278945719342337487LL;
int var_3 = 202078015;
short var_7 = (short)2207;
int zero = 0;
unsigned char var_10 = (unsigned char)159;
long long int var_11 = -8592755164206054636LL;
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
