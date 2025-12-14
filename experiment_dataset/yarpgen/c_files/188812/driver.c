#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-31922;
signed char var_5 = (signed char)89;
long long int var_9 = -5286948140025681132LL;
short var_14 = (short)-7825;
int zero = 0;
unsigned short var_17 = (unsigned short)50086;
unsigned int var_18 = 2991763982U;
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
