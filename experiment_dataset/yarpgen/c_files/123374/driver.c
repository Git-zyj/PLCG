#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 553440744388632021ULL;
long long int var_7 = 8276740458416104327LL;
long long int var_14 = 6082409077964711429LL;
int zero = 0;
unsigned long long int var_18 = 15214825082856819081ULL;
unsigned int var_19 = 3380493141U;
unsigned long long int var_20 = 17398447313504029743ULL;
void init() {
}

void checksum() {
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
