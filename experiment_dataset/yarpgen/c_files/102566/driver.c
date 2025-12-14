#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1007686775878943157LL;
int var_3 = 1505188840;
unsigned long long int var_9 = 18113375791498169767ULL;
int zero = 0;
short var_13 = (short)4545;
unsigned char var_14 = (unsigned char)187;
long long int var_15 = 4590861605330343904LL;
signed char var_16 = (signed char)76;
unsigned int var_17 = 3484097876U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
