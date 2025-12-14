#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -422152912;
signed char var_7 = (signed char)23;
short var_11 = (short)-11668;
int zero = 0;
long long int var_13 = 3949030100568250614LL;
unsigned int var_14 = 1487184654U;
unsigned char var_15 = (unsigned char)137;
void init() {
}

void checksum() {
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
