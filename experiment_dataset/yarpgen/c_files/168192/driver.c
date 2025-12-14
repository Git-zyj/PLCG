#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3439737956183932769ULL;
signed char var_3 = (signed char)-73;
unsigned int var_7 = 497654959U;
unsigned long long int var_10 = 660311555839003911ULL;
int zero = 0;
unsigned int var_15 = 2294889700U;
unsigned short var_16 = (unsigned short)7654;
short var_17 = (short)22773;
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
