#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-11;
short var_5 = (short)-16560;
unsigned char var_6 = (unsigned char)79;
unsigned int var_8 = 3263489987U;
unsigned char var_11 = (unsigned char)49;
int zero = 0;
short var_18 = (short)-5104;
unsigned int var_19 = 4012936621U;
unsigned int var_20 = 425029018U;
void init() {
}

void checksum() {
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
