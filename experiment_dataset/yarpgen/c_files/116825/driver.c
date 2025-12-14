#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -770884369;
_Bool var_5 = (_Bool)0;
short var_10 = (short)27663;
int zero = 0;
signed char var_13 = (signed char)120;
long long int var_14 = -2426361649958400250LL;
unsigned int var_15 = 263942159U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
