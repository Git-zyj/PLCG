#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8645439002713405776LL;
unsigned short var_5 = (unsigned short)9669;
unsigned int var_6 = 1061352831U;
unsigned long long int var_7 = 13476664961251690960ULL;
unsigned char var_9 = (unsigned char)103;
unsigned short var_13 = (unsigned short)43183;
int zero = 0;
unsigned int var_14 = 1455297086U;
int var_15 = -2056123150;
short var_16 = (short)7165;
int var_17 = 1718293912;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
