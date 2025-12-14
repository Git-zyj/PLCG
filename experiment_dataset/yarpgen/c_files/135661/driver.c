#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1199491673;
_Bool var_1 = (_Bool)1;
long long int var_2 = 6155022764928935581LL;
int var_3 = -1972061650;
unsigned long long int var_7 = 3625420509036765978ULL;
unsigned short var_9 = (unsigned short)28052;
int var_10 = -23603473;
int zero = 0;
unsigned short var_12 = (unsigned short)16370;
unsigned short var_13 = (unsigned short)25913;
unsigned short var_14 = (unsigned short)3218;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
