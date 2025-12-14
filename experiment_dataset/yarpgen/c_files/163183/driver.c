#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7815742819167409887LL;
unsigned short var_6 = (unsigned short)54054;
unsigned short var_9 = (unsigned short)44284;
short var_10 = (short)-14697;
unsigned short var_11 = (unsigned short)46077;
int zero = 0;
signed char var_12 = (signed char)-63;
unsigned short var_13 = (unsigned short)13264;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
