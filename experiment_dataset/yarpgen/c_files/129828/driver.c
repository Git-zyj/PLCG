#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-3547;
int zero = 0;
signed char var_11 = (signed char)-84;
int var_12 = -29636492;
unsigned char var_13 = (unsigned char)209;
unsigned long long int var_14 = 17910692531520643397ULL;
short var_15 = (short)-28320;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
