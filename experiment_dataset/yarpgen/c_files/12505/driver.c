#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 818410217U;
unsigned int var_8 = 2841952578U;
long long int var_9 = -4800001140455207198LL;
short var_13 = (short)-26357;
unsigned int var_15 = 188643176U;
int zero = 0;
unsigned int var_16 = 1661257314U;
unsigned short var_17 = (unsigned short)44482;
void init() {
}

void checksum() {
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
