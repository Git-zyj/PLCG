#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-123;
unsigned int var_5 = 1097963065U;
unsigned int var_7 = 4122196346U;
int var_8 = -2059269929;
int zero = 0;
int var_12 = 1601015832;
short var_13 = (short)21213;
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
