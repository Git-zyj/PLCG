#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
unsigned int var_4 = 1872868081U;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-25092;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)48;
short var_17 = (short)-7771;
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
