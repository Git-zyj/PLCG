#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 900698626;
int var_7 = 383649330;
int var_9 = 1442075681;
unsigned short var_10 = (unsigned short)20066;
int zero = 0;
int var_13 = 1211174802;
_Bool var_14 = (_Bool)0;
int var_15 = -1850283948;
unsigned short var_16 = (unsigned short)37355;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
