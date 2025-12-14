#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)67;
int var_5 = 1247506162;
_Bool var_6 = (_Bool)0;
long long int var_8 = -28548003132179640LL;
unsigned int var_9 = 1318457905U;
short var_12 = (short)31799;
int zero = 0;
long long int var_15 = -1856345902522045328LL;
unsigned char var_16 = (unsigned char)73;
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
