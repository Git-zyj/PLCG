#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -7028608638672487242LL;
unsigned int var_12 = 192950758U;
int zero = 0;
short var_18 = (short)8388;
unsigned long long int var_19 = 8560798626163536319ULL;
unsigned long long int var_20 = 11329762799155379121ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
