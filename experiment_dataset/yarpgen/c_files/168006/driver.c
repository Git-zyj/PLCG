#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3797147428940533602LL;
int var_3 = -721055352;
unsigned int var_10 = 4228851255U;
unsigned long long int var_15 = 16910547615124175235ULL;
int zero = 0;
short var_19 = (short)-14119;
unsigned int var_20 = 18656348U;
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
