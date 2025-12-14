#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)-242;
unsigned char var_5 = (unsigned char)9;
short var_8 = (short)-9790;
unsigned long long int var_11 = 5929920054322438601ULL;
int var_13 = 1358597113;
int zero = 0;
signed char var_15 = (signed char)-9;
unsigned long long int var_16 = 13855037703147262590ULL;
_Bool var_17 = (_Bool)1;
int var_18 = 1747649337;
long long int var_19 = 2674008666838425383LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
