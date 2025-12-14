#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 9344845796395997245ULL;
unsigned long long int var_14 = 10622846609564192427ULL;
int zero = 0;
unsigned int var_15 = 141710572U;
short var_16 = (short)16274;
long long int var_17 = -3788920961408458407LL;
unsigned int var_18 = 776531006U;
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
