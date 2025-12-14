#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2199401688474242049LL;
short var_3 = (short)-3469;
long long int var_11 = -8154711071162042458LL;
unsigned int var_12 = 3086102487U;
int zero = 0;
unsigned char var_14 = (unsigned char)220;
short var_15 = (short)29311;
unsigned short var_16 = (unsigned short)1200;
unsigned char var_17 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
