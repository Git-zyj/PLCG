#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 2646763927608970959LL;
short var_14 = (short)18169;
int zero = 0;
unsigned long long int var_16 = 12733615283230137042ULL;
unsigned short var_17 = (unsigned short)13090;
unsigned long long int var_18 = 6793093181392102380ULL;
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
