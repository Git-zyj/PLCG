#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20916;
short var_6 = (short)-839;
unsigned int var_7 = 343414633U;
unsigned short var_11 = (unsigned short)35788;
int zero = 0;
short var_13 = (short)-3178;
unsigned char var_14 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
