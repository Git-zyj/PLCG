#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13125475602891426270ULL;
unsigned char var_7 = (unsigned char)26;
unsigned long long int var_9 = 2823326582879609668ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -5714540696183495835LL;
unsigned int var_14 = 2633261410U;
unsigned long long int var_15 = 12690710549415691581ULL;
short var_16 = (short)5775;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
