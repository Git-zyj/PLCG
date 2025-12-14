#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1648547853;
unsigned long long int var_7 = 11315535755899223006ULL;
int var_16 = 2102034644;
unsigned long long int var_17 = 5846366908273976281ULL;
int zero = 0;
short var_20 = (short)5051;
signed char var_21 = (signed char)-4;
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
