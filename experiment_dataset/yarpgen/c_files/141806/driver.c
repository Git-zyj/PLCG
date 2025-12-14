#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1932233167U;
long long int var_4 = 6684509195482555243LL;
signed char var_7 = (signed char)78;
signed char var_9 = (signed char)88;
short var_12 = (short)25563;
int zero = 0;
long long int var_19 = 2083142069238560555LL;
signed char var_20 = (signed char)68;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
