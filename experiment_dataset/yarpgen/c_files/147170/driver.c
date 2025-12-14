#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)12351;
unsigned int var_3 = 4276208491U;
short var_5 = (short)-7169;
unsigned int var_9 = 967838751U;
unsigned int var_14 = 1334989256U;
short var_15 = (short)-6299;
int zero = 0;
int var_17 = 2124654336;
long long int var_18 = -6511411605514131523LL;
long long int var_19 = -176494909508805791LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
