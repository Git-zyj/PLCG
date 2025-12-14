#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4516;
unsigned long long int var_3 = 14162298645266438707ULL;
long long int var_6 = -113206040787732908LL;
unsigned short var_8 = (unsigned short)46036;
unsigned short var_10 = (unsigned short)6339;
long long int var_11 = -8703038171925761683LL;
int var_13 = 359405349;
int var_15 = 1739190844;
int zero = 0;
unsigned short var_16 = (unsigned short)60777;
unsigned short var_17 = (unsigned short)54663;
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
