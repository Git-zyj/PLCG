#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7726878315923368169LL;
unsigned short var_3 = (unsigned short)21095;
unsigned int var_4 = 3362269748U;
short var_9 = (short)20663;
unsigned long long int var_12 = 3773610174587247148ULL;
unsigned long long int var_14 = 37481027216384341ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)59112;
unsigned int var_16 = 3792140658U;
long long int var_17 = -4868416012488802308LL;
unsigned char var_18 = (unsigned char)91;
unsigned long long int var_19 = 1009313691425592446ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
