#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)30434;
unsigned short var_9 = (unsigned short)63295;
signed char var_15 = (signed char)52;
int zero = 0;
unsigned char var_16 = (unsigned char)131;
_Bool var_17 = (_Bool)0;
long long int var_18 = -1008082007814765122LL;
void init() {
}

void checksum() {
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
