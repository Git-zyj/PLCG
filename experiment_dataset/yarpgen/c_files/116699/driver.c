#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19479;
short var_1 = (short)22348;
unsigned int var_3 = 3356158023U;
unsigned short var_4 = (unsigned short)29470;
unsigned short var_7 = (unsigned short)45347;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 4019704260U;
unsigned long long int var_11 = 8843166303159236974ULL;
int zero = 0;
unsigned int var_13 = 2063247179U;
unsigned long long int var_14 = 175253159653323715ULL;
unsigned long long int var_15 = 280884078568617602ULL;
unsigned short var_16 = (unsigned short)45310;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
