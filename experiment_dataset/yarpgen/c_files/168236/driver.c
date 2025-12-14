#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)28655;
short var_4 = (short)-425;
unsigned long long int var_6 = 13045229811860300744ULL;
unsigned long long int var_11 = 3454846782056520930ULL;
int zero = 0;
long long int var_14 = 3469249446679162899LL;
unsigned long long int var_15 = 10506533792226197956ULL;
long long int var_16 = 2702400112400781435LL;
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
