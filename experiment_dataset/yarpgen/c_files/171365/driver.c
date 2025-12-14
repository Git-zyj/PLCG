#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4168065767988819635LL;
unsigned short var_6 = (unsigned short)43293;
unsigned long long int var_11 = 10424093922577785452ULL;
unsigned int var_12 = 3862611550U;
int zero = 0;
unsigned long long int var_13 = 1190529432594552422ULL;
unsigned int var_14 = 2253440131U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
