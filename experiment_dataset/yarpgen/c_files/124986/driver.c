#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8802;
long long int var_6 = 4947678233413504305LL;
unsigned int var_9 = 3923269889U;
long long int var_10 = 2847511986809018392LL;
int var_12 = 1770711673;
unsigned long long int var_13 = 11160225448060160199ULL;
int zero = 0;
unsigned long long int var_16 = 9276812230309273743ULL;
unsigned long long int var_17 = 3210435862666484929ULL;
short var_18 = (short)16174;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
