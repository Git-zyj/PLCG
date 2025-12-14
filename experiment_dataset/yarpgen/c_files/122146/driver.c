#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)43;
signed char var_7 = (signed char)58;
unsigned short var_8 = (unsigned short)14932;
unsigned short var_9 = (unsigned short)63984;
int zero = 0;
unsigned short var_10 = (unsigned short)13131;
unsigned short var_11 = (unsigned short)33710;
signed char var_12 = (signed char)-24;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
