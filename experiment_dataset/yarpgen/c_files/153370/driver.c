#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7835577484892267501LL;
int var_5 = -1782725888;
short var_6 = (short)-17075;
unsigned int var_10 = 895253804U;
int zero = 0;
signed char var_13 = (signed char)-126;
unsigned long long int var_14 = 17780903782928801980ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
