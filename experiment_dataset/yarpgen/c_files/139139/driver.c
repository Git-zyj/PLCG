#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-75;
signed char var_4 = (signed char)-78;
unsigned char var_6 = (unsigned char)129;
unsigned int var_7 = 3161892497U;
int zero = 0;
long long int var_12 = 2568666573796014880LL;
signed char var_13 = (signed char)46;
short var_14 = (short)-18601;
unsigned int var_15 = 1325933065U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
