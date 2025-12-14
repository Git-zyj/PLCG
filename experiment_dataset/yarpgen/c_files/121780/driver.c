#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
long long int var_4 = -2677477248090698559LL;
unsigned char var_6 = (unsigned char)210;
int var_7 = -1990205422;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_16 = (short)19579;
short var_17 = (short)31980;
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
