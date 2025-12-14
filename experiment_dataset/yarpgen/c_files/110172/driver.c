#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5975008967950994467ULL;
int var_2 = 836401186;
int var_3 = -1741030008;
unsigned int var_4 = 321695045U;
int var_5 = 1603324718;
int var_6 = -1706422689;
int var_7 = -178149954;
long long int var_10 = 3327302166661266747LL;
int var_11 = -519116617;
int zero = 0;
unsigned long long int var_12 = 14239259935683683802ULL;
unsigned int var_13 = 3050087410U;
long long int var_14 = -3383041211577078088LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
