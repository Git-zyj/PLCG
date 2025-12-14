#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)118;
unsigned int var_5 = 2458140288U;
unsigned int var_14 = 2930999214U;
unsigned long long int var_15 = 8971612890482557562ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)22;
int var_18 = 460555052;
unsigned char var_19 = (unsigned char)132;
short var_20 = (short)-20042;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
