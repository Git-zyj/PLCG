#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 13635059335984770575ULL;
int var_3 = -1803681550;
int var_4 = 496725685;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-41;
long long int var_11 = 9218704562072309347LL;
int var_12 = -285616673;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 1522097587998652455ULL;
short var_17 = (short)-10927;
unsigned long long int var_18 = 5515875891156981580ULL;
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
