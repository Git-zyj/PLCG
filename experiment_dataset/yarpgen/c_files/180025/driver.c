#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4714990583392863323LL;
short var_2 = (short)-14234;
unsigned char var_7 = (unsigned char)10;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-31;
int zero = 0;
long long int var_12 = -1718000270641653462LL;
long long int var_13 = 2337835318795229320LL;
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
