#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4411654020266381516ULL;
unsigned short var_7 = (unsigned short)61825;
int var_8 = 1580143146;
unsigned char var_12 = (unsigned char)217;
short var_13 = (short)12228;
int zero = 0;
int var_15 = 1523835974;
unsigned char var_16 = (unsigned char)72;
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
