#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-76;
unsigned int var_7 = 1801931818U;
signed char var_9 = (signed char)62;
int var_13 = 1679712484;
unsigned long long int var_14 = 3867825926385599443ULL;
int zero = 0;
unsigned long long int var_15 = 2904410783831464655ULL;
signed char var_16 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
