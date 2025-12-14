#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-86;
signed char var_8 = (signed char)85;
signed char var_10 = (signed char)-125;
unsigned short var_11 = (unsigned short)11647;
int zero = 0;
unsigned long long int var_15 = 11936329188736221900ULL;
unsigned short var_16 = (unsigned short)43755;
unsigned short var_17 = (unsigned short)2007;
void init() {
}

void checksum() {
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
