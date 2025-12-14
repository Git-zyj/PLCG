#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)62;
unsigned short var_7 = (unsigned short)25274;
short var_10 = (short)-23576;
signed char var_15 = (signed char)-73;
int zero = 0;
unsigned short var_18 = (unsigned short)60678;
unsigned short var_19 = (unsigned short)23100;
void init() {
}

void checksum() {
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
