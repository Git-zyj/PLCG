#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_5 = 1659420002U;
unsigned short var_7 = (unsigned short)19654;
long long int var_9 = 1798980734396440190LL;
unsigned int var_14 = 3150555519U;
int zero = 0;
unsigned int var_15 = 1847091846U;
signed char var_16 = (signed char)100;
unsigned int var_17 = 205170417U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
