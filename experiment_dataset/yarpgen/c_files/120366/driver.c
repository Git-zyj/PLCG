#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)9373;
signed char var_8 = (signed char)39;
unsigned long long int var_9 = 18269925321854697748ULL;
int zero = 0;
unsigned long long int var_11 = 11578497515957219381ULL;
short var_12 = (short)-3646;
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
