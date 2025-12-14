#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)7644;
_Bool var_3 = (_Bool)0;
long long int var_16 = -7649817674126915732LL;
int zero = 0;
short var_17 = (short)15035;
int var_18 = -1278513710;
unsigned short var_19 = (unsigned short)1883;
void init() {
}

void checksum() {
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
