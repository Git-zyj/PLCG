#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1086966183;
long long int var_5 = 15370181609747495LL;
long long int var_9 = -839183966469927711LL;
int var_14 = -1653576603;
int zero = 0;
unsigned short var_15 = (unsigned short)40614;
unsigned int var_16 = 1725199808U;
void init() {
}

void checksum() {
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
