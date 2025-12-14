#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4986;
signed char var_11 = (signed char)-75;
int zero = 0;
signed char var_19 = (signed char)15;
short var_20 = (short)-30494;
unsigned int var_21 = 2678949244U;
unsigned char var_22 = (unsigned char)131;
int var_23 = 5953119;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
