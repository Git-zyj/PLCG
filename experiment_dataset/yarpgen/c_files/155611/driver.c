#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1136972089;
unsigned int var_2 = 1680895371U;
short var_4 = (short)-26481;
signed char var_11 = (signed char)74;
int zero = 0;
int var_12 = -97299848;
unsigned char var_13 = (unsigned char)103;
unsigned long long int var_14 = 9088340182880451553ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
