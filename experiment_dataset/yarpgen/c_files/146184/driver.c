#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4220981584137167457LL;
_Bool var_4 = (_Bool)1;
long long int var_5 = 1831297569562159627LL;
long long int var_6 = 7079000917057221235LL;
signed char var_10 = (signed char)82;
long long int var_11 = 1813330506253494230LL;
int zero = 0;
unsigned long long int var_15 = 8048663071725558058ULL;
unsigned int var_16 = 3672252593U;
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
