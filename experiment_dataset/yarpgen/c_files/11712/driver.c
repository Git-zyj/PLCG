#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)264;
unsigned short var_3 = (unsigned short)29833;
int var_4 = -1381200705;
long long int var_9 = 5270744425831560218LL;
unsigned long long int var_12 = 11941031135449632305ULL;
unsigned short var_13 = (unsigned short)43702;
int zero = 0;
unsigned int var_17 = 3805439741U;
unsigned short var_18 = (unsigned short)58700;
unsigned int var_19 = 858556536U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
