#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4820453590215060318ULL;
_Bool var_1 = (_Bool)0;
int var_2 = -1286592597;
long long int var_6 = 8142019129073233300LL;
int var_8 = 1371964527;
long long int var_9 = 978507298275547022LL;
long long int var_10 = 713253365114280132LL;
long long int var_11 = 6626103294991844212LL;
long long int var_12 = -2482176826489031494LL;
unsigned int var_13 = 4036357810U;
unsigned char var_14 = (unsigned char)58;
int zero = 0;
unsigned short var_15 = (unsigned short)39764;
long long int var_16 = -6077353548771700218LL;
signed char var_17 = (signed char)-45;
void init() {
}

void checksum() {
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
