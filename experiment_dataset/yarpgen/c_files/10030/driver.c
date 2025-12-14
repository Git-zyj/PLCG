#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5735330148652639176LL;
unsigned short var_4 = (unsigned short)2622;
short var_7 = (short)25061;
int zero = 0;
unsigned short var_14 = (unsigned short)6309;
unsigned long long int var_15 = 6986237997842701209ULL;
long long int var_16 = 4576104941649577213LL;
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
