#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28714;
long long int var_4 = 3539653487532119781LL;
short var_9 = (short)18174;
unsigned short var_12 = (unsigned short)46142;
int zero = 0;
unsigned int var_15 = 1702928358U;
unsigned int var_16 = 3053927172U;
unsigned int var_17 = 1961404246U;
int var_18 = -1149696989;
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
