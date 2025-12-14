#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4083576649029256530LL;
unsigned char var_6 = (unsigned char)14;
unsigned long long int var_7 = 6408544125409701923ULL;
int zero = 0;
long long int var_18 = -5973334560778407727LL;
int var_19 = 864531924;
signed char var_20 = (signed char)33;
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
