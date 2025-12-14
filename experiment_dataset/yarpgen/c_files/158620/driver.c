#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5163;
_Bool var_3 = (_Bool)1;
_Bool var_8 = (_Bool)0;
long long int var_9 = -5261597682439947706LL;
short var_12 = (short)729;
unsigned short var_13 = (unsigned short)45181;
int zero = 0;
int var_16 = -1164011887;
unsigned short var_17 = (unsigned short)58066;
signed char var_18 = (signed char)103;
short var_19 = (short)16248;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
