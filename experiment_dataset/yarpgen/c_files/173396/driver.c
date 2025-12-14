#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7857616553318504702ULL;
unsigned short var_2 = (unsigned short)4350;
int var_3 = -1712569541;
unsigned long long int var_5 = 13316017744637228934ULL;
signed char var_7 = (signed char)66;
unsigned char var_10 = (unsigned char)212;
short var_12 = (short)-5446;
unsigned short var_14 = (unsigned short)58660;
long long int var_18 = -8855441844009818668LL;
int zero = 0;
long long int var_20 = 2556069180911626375LL;
long long int var_21 = -2717093406009873674LL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
