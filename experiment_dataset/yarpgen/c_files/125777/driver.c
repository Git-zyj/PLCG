#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1919537376;
unsigned short var_5 = (unsigned short)18912;
signed char var_12 = (signed char)112;
int zero = 0;
unsigned long long int var_14 = 16439430677164592671ULL;
int var_15 = 1780570956;
unsigned int var_16 = 1242688820U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
