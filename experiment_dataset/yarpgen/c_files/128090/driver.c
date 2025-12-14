#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
unsigned char var_2 = (unsigned char)14;
signed char var_3 = (signed char)97;
signed char var_5 = (signed char)60;
short var_7 = (short)24434;
int zero = 0;
short var_12 = (short)-28712;
short var_13 = (short)-21055;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
