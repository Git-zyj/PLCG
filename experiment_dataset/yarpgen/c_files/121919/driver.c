#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31584;
int var_1 = 391053299;
short var_13 = (short)-14080;
int var_15 = -1547229429;
unsigned char var_16 = (unsigned char)60;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 2786671131571828125ULL;
void init() {
}

void checksum() {
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
