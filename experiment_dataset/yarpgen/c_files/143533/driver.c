#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = 1055568560;
int var_13 = -1372138299;
long long int var_16 = 1407260907957808571LL;
int var_17 = 1897302283;
int var_19 = 1410892693;
int zero = 0;
int var_20 = -14441572;
long long int var_21 = -6054491138264128855LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
