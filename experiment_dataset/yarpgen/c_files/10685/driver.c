#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4288366314U;
unsigned short var_2 = (unsigned short)44457;
unsigned short var_7 = (unsigned short)19504;
int zero = 0;
unsigned short var_11 = (unsigned short)10124;
unsigned long long int var_12 = 7302705442038169097ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
