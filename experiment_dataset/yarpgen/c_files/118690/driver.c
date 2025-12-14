#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1910357498;
signed char var_5 = (signed char)73;
short var_8 = (short)-14976;
int zero = 0;
signed char var_15 = (signed char)71;
unsigned char var_16 = (unsigned char)248;
int var_17 = -1169803362;
signed char var_18 = (signed char)-35;
int var_19 = 379941349;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
