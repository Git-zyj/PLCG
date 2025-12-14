#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7075271081986241084LL;
long long int var_2 = -5695750314433841066LL;
short var_4 = (short)11160;
int zero = 0;
unsigned int var_17 = 3467789808U;
unsigned short var_18 = (unsigned short)28792;
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
