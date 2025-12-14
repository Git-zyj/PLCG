#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2052043154721241662ULL;
unsigned long long int var_3 = 7302154816870609785ULL;
short var_6 = (short)-21156;
short var_9 = (short)-16083;
unsigned int var_14 = 1907458813U;
int zero = 0;
unsigned short var_16 = (unsigned short)40425;
unsigned long long int var_17 = 8502742446319021493ULL;
int var_18 = 1198379099;
unsigned int var_19 = 1606495661U;
void init() {
}

void checksum() {
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
