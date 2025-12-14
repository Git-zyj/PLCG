#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 7048298783508449111LL;
unsigned int var_12 = 2898331486U;
int zero = 0;
signed char var_18 = (signed char)-61;
signed char var_19 = (signed char)-67;
signed char var_20 = (signed char)54;
signed char var_21 = (signed char)-116;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
