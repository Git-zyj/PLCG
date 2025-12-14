#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9144663829230060115ULL;
long long int var_2 = -6639787644326223624LL;
_Bool var_3 = (_Bool)0;
short var_6 = (short)-20931;
long long int var_17 = 1969676385262708733LL;
int zero = 0;
signed char var_20 = (signed char)16;
long long int var_21 = 8782961300329244706LL;
void init() {
}

void checksum() {
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
