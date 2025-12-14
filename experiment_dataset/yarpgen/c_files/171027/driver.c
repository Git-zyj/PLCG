#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12857357615553532390ULL;
long long int var_6 = 8029104929866384174LL;
short var_8 = (short)-25625;
long long int var_10 = 150732490860284416LL;
unsigned long long int var_16 = 5135086153400979109ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)42339;
unsigned long long int var_21 = 5400004651780763948ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
