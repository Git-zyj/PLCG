#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20236;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)27246;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 910971267U;
long long int var_14 = 3498098497083523476LL;
int zero = 0;
unsigned int var_16 = 2058298533U;
signed char var_17 = (signed char)94;
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
