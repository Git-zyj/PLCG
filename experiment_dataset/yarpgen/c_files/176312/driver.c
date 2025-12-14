#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)22690;
unsigned int var_10 = 2698992655U;
long long int var_13 = -6521159098990008718LL;
int zero = 0;
long long int var_17 = -7247369506234353096LL;
unsigned int var_18 = 637624236U;
unsigned short var_19 = (unsigned short)7355;
void init() {
}

void checksum() {
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
