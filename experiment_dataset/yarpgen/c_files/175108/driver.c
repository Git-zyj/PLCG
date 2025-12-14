#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1630706034;
short var_3 = (short)9288;
signed char var_4 = (signed char)24;
int var_5 = 710543288;
unsigned short var_6 = (unsigned short)11871;
unsigned long long int var_9 = 11680140007176411352ULL;
unsigned long long int var_10 = 12317329429596304639ULL;
int zero = 0;
long long int var_16 = -6003619652348064727LL;
unsigned short var_17 = (unsigned short)53594;
signed char var_18 = (signed char)79;
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
