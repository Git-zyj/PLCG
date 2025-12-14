#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20237;
long long int var_6 = 2594079581405103834LL;
long long int var_15 = 3081253517211272910LL;
int zero = 0;
short var_16 = (short)-1022;
int var_17 = 2045005811;
int var_18 = -377307424;
short var_19 = (short)23128;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
