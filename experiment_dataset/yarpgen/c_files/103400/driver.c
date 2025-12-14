#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_13 = (unsigned short)29205;
signed char var_15 = (signed char)-56;
short var_17 = (short)24915;
int zero = 0;
unsigned short var_19 = (unsigned short)8739;
short var_20 = (short)27614;
signed char var_21 = (signed char)-82;
void init() {
}

void checksum() {
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
