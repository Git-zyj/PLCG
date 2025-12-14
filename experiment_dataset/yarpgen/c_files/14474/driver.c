#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4838148646580405461LL;
short var_4 = (short)2234;
short var_7 = (short)27310;
_Bool var_9 = (_Bool)0;
signed char var_14 = (signed char)46;
int zero = 0;
unsigned short var_15 = (unsigned short)56122;
int var_16 = -1108800176;
long long int var_17 = -7054764254713727422LL;
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
