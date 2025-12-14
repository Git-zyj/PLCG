#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51637;
unsigned short var_2 = (unsigned short)51119;
long long int var_6 = 4374194532832646609LL;
long long int var_7 = -8342842521365413472LL;
unsigned int var_9 = 1597132025U;
signed char var_13 = (signed char)-38;
long long int var_14 = -2735170614350727682LL;
int zero = 0;
unsigned int var_16 = 2735798838U;
unsigned int var_17 = 1120784147U;
int var_18 = 1619103150;
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
