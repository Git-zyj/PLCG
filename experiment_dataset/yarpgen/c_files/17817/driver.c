#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2881455913539324503LL;
long long int var_3 = -4144491193524625317LL;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-105;
unsigned short var_11 = (unsigned short)36494;
int zero = 0;
short var_13 = (short)-23653;
unsigned char var_14 = (unsigned char)204;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
