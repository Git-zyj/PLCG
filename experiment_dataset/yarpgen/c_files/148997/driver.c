#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11980;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-21278;
unsigned long long int var_8 = 9790064046251968918ULL;
long long int var_10 = 6806182519787281248LL;
unsigned int var_12 = 1888047267U;
int zero = 0;
int var_14 = 77283424;
unsigned long long int var_15 = 17688239633918047563ULL;
unsigned int var_16 = 3760199100U;
short var_17 = (short)25183;
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
