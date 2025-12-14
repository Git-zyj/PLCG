#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10841;
int var_6 = -2032029568;
unsigned int var_7 = 3156821931U;
int var_10 = 955027350;
int zero = 0;
long long int var_13 = -1429034016324166752LL;
long long int var_14 = 5931003284440013758LL;
short var_15 = (short)7388;
int var_16 = -302122872;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
