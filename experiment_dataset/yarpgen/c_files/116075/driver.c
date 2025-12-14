#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27947;
unsigned short var_2 = (unsigned short)29281;
long long int var_4 = 4038879093818859178LL;
unsigned int var_12 = 2218759358U;
int zero = 0;
signed char var_16 = (signed char)3;
short var_17 = (short)32645;
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
