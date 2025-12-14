#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3168906740858246444LL;
long long int var_2 = 3772059416490396330LL;
unsigned char var_3 = (unsigned char)247;
short var_5 = (short)31251;
int zero = 0;
unsigned int var_12 = 2527710943U;
int var_13 = 652660818;
void init() {
}

void checksum() {
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
