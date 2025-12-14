#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 832792367;
signed char var_4 = (signed char)-120;
int zero = 0;
signed char var_17 = (signed char)-125;
unsigned int var_18 = 3053893182U;
int var_19 = 911197146;
signed char var_20 = (signed char)75;
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
