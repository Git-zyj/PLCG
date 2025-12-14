#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1294610578448909270LL;
unsigned char var_4 = (unsigned char)52;
long long int var_5 = -7772898754427862249LL;
short var_11 = (short)-11571;
int zero = 0;
unsigned char var_12 = (unsigned char)42;
unsigned long long int var_13 = 9111444438096525098ULL;
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
