#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)213;
signed char var_1 = (signed char)-87;
unsigned int var_2 = 2071825096U;
unsigned long long int var_4 = 3245681074401988503ULL;
signed char var_6 = (signed char)-38;
unsigned short var_9 = (unsigned short)3961;
unsigned long long int var_15 = 931413572646125366ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 6971724290386306899LL;
unsigned char var_18 = (unsigned char)119;
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
