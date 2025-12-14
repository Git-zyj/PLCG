#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10885469401543743243ULL;
long long int var_3 = -1046039807533196458LL;
signed char var_5 = (signed char)-11;
unsigned int var_6 = 1560274667U;
unsigned long long int var_8 = 10546631133093867056ULL;
int var_10 = 1106205029;
int zero = 0;
int var_12 = -1294513807;
signed char var_13 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
