#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 1661680423U;
signed char var_11 = (signed char)49;
short var_13 = (short)2610;
int zero = 0;
unsigned int var_17 = 1421954512U;
long long int var_18 = -2756859182346023546LL;
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
