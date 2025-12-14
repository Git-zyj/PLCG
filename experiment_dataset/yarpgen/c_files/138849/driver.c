#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7976138770408879690LL;
long long int var_8 = -5977610899466320407LL;
short var_13 = (short)9223;
signed char var_14 = (signed char)113;
int zero = 0;
unsigned short var_15 = (unsigned short)5971;
unsigned short var_16 = (unsigned short)59055;
short var_17 = (short)13634;
long long int var_18 = -6374989119282738854LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
