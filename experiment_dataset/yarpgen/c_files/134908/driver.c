#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10615;
unsigned int var_6 = 3301667357U;
unsigned int var_12 = 117328881U;
short var_14 = (short)11536;
unsigned long long int var_19 = 11556862445383532084ULL;
int zero = 0;
int var_20 = 636606961;
short var_21 = (short)4147;
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
