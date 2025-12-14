#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5496679345538180832LL;
long long int var_3 = -4087357817592255406LL;
long long int var_4 = 6927965349925069811LL;
int zero = 0;
short var_10 = (short)14527;
short var_11 = (short)32494;
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
