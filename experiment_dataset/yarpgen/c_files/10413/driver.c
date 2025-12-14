#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1280641452;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3562106489U;
short var_6 = (short)-9557;
unsigned int var_8 = 4033666429U;
signed char var_9 = (signed char)-121;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)22;
int zero = 0;
int var_13 = 829912289;
int var_14 = -1230131581;
int var_15 = 1747028887;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2877514773U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
