#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1329170609U;
signed char var_10 = (signed char)12;
unsigned char var_11 = (unsigned char)137;
unsigned long long int var_12 = 3111293789038835703ULL;
int zero = 0;
unsigned int var_16 = 347071661U;
unsigned int var_17 = 1649531051U;
signed char var_18 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
