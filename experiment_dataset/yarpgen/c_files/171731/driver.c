#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6372576350263263666ULL;
unsigned char var_7 = (unsigned char)49;
unsigned long long int var_13 = 6743033138227158231ULL;
int zero = 0;
unsigned long long int var_15 = 11658711234457732017ULL;
unsigned short var_16 = (unsigned short)6018;
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
