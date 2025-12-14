#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 388340869U;
unsigned short var_3 = (unsigned short)37854;
unsigned short var_5 = (unsigned short)44600;
unsigned int var_6 = 1596275866U;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = 2262028210424538370LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
