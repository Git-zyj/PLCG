#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44696;
unsigned int var_5 = 1786680494U;
long long int var_8 = -280664588224020406LL;
short var_13 = (short)23622;
int zero = 0;
short var_17 = (short)5219;
unsigned short var_18 = (unsigned short)62612;
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
