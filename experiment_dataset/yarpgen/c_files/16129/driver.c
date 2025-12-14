#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2562256697U;
unsigned long long int var_6 = 13385065960040073397ULL;
long long int var_10 = 8511917089178020433LL;
short var_13 = (short)-32247;
long long int var_14 = 3868683647589675332LL;
int zero = 0;
unsigned char var_16 = (unsigned char)14;
unsigned char var_17 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
