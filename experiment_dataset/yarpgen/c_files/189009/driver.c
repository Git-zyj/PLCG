#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-21307;
unsigned long long int var_8 = 5851447250806421809ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_12 = 1066255950960298060ULL;
short var_14 = (short)-10037;
int zero = 0;
signed char var_15 = (signed char)-80;
short var_16 = (short)171;
unsigned short var_17 = (unsigned short)11660;
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
