#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1497503738971490838LL;
_Bool var_1 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)135;
unsigned int var_11 = 3728415957U;
int var_12 = -878908045;
int var_13 = -861763555;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
