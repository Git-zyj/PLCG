#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)47;
unsigned long long int var_6 = 5647384992287438804ULL;
int var_9 = 766314882;
signed char var_11 = (signed char)31;
unsigned int var_13 = 1760330983U;
int zero = 0;
int var_15 = -21539265;
signed char var_16 = (signed char)125;
void init() {
}

void checksum() {
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
