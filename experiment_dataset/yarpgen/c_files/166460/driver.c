#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10423;
long long int var_5 = -3676606750400529772LL;
int var_8 = -248572822;
int var_14 = -1087411793;
int zero = 0;
int var_16 = -271211695;
long long int var_17 = 7325963262692280026LL;
signed char var_18 = (signed char)45;
int var_19 = -1090093343;
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
