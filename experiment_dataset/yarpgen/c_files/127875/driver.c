#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)198;
long long int var_8 = -7371820536473709929LL;
long long int var_9 = 2968330982485194544LL;
unsigned long long int var_12 = 10288453984059556397ULL;
int zero = 0;
short var_16 = (short)23108;
unsigned int var_17 = 3807786210U;
unsigned short var_18 = (unsigned short)44828;
void init() {
}

void checksum() {
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
