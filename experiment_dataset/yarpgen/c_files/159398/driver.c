#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16820097204772504650ULL;
long long int var_1 = -6584165995067801834LL;
unsigned int var_6 = 4234899623U;
unsigned short var_14 = (unsigned short)46880;
int zero = 0;
unsigned short var_17 = (unsigned short)55053;
int var_18 = -658453704;
unsigned long long int var_19 = 1324279280703940388ULL;
int var_20 = -189679069;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
