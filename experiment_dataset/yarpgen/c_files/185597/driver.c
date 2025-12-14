#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)32491;
long long int var_4 = -5762811775874202310LL;
short var_5 = (short)29077;
short var_12 = (short)-30455;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)20617;
int var_17 = 1824598760;
long long int var_18 = -3027025568929807088LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
