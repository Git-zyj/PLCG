#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 527784431U;
unsigned int var_4 = 2334795774U;
short var_6 = (short)-22339;
int var_7 = 418077829;
signed char var_9 = (signed char)4;
unsigned short var_13 = (unsigned short)51604;
int var_16 = -303830735;
int zero = 0;
unsigned short var_17 = (unsigned short)41495;
long long int var_18 = 7033362196586699332LL;
void init() {
}

void checksum() {
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
