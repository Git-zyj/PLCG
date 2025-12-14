#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4020637144U;
short var_3 = (short)11727;
unsigned long long int var_19 = 2791300360766710092ULL;
int zero = 0;
unsigned int var_20 = 4182500389U;
short var_21 = (short)7092;
unsigned long long int var_22 = 14945181887572428569ULL;
unsigned long long int var_23 = 17657406202897632758ULL;
short var_24 = (short)11231;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
