#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13374;
int var_1 = -148530506;
unsigned short var_4 = (unsigned short)27752;
int var_8 = -1238411872;
unsigned long long int var_9 = 16250887816673964943ULL;
int var_12 = 750814659;
int zero = 0;
short var_15 = (short)-20922;
int var_16 = -511356247;
unsigned int var_17 = 359207742U;
unsigned short var_18 = (unsigned short)53334;
short var_19 = (short)-1912;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
