#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)29915;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)18491;
unsigned long long int var_9 = 10164929896475887632ULL;
long long int var_12 = -5370757162531434902LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 326274062756820109LL;
short var_21 = (short)-21607;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
