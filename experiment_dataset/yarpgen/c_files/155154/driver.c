#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10516;
int var_3 = -1312563188;
short var_4 = (short)-5965;
short var_5 = (short)-6760;
unsigned short var_10 = (unsigned short)59277;
int zero = 0;
short var_11 = (short)-18015;
unsigned short var_12 = (unsigned short)10114;
short var_13 = (short)31353;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
