#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6836366500891500995LL;
unsigned long long int var_4 = 15162210083140091809ULL;
int var_6 = 529275179;
long long int var_14 = 5578156367163387734LL;
int zero = 0;
signed char var_16 = (signed char)-33;
unsigned long long int var_17 = 16871816320484765808ULL;
signed char var_18 = (signed char)126;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
