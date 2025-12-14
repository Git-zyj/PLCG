#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1531704975U;
unsigned short var_2 = (unsigned short)6950;
signed char var_6 = (signed char)-83;
unsigned long long int var_8 = 12860973575926473295ULL;
int zero = 0;
unsigned long long int var_20 = 7919308373453022382ULL;
signed char var_21 = (signed char)-95;
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
