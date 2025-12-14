#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 335634721487747296ULL;
short var_2 = (short)-26130;
long long int var_14 = -727559803402113496LL;
short var_15 = (short)-23720;
long long int var_17 = 8948243523470253106LL;
int zero = 0;
unsigned long long int var_18 = 17606303052935987905ULL;
long long int var_19 = 5539358037328786116LL;
unsigned long long int var_20 = 161497396660267725ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
