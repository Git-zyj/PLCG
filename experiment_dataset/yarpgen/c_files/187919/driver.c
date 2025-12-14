#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7772022214469250802ULL;
unsigned long long int var_2 = 11735185717602131904ULL;
short var_5 = (short)27802;
int var_6 = 1477330932;
unsigned long long int var_7 = 2748367498488172836ULL;
int zero = 0;
int var_10 = 1215318485;
unsigned short var_11 = (unsigned short)8151;
short var_12 = (short)-2861;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
