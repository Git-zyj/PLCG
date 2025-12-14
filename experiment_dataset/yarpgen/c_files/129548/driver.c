#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15094214482411967707ULL;
long long int var_7 = 3694544422181892152LL;
int zero = 0;
unsigned long long int var_14 = 8182907577044349824ULL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)137;
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
