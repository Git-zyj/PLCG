#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1599964779U;
_Bool var_6 = (_Bool)1;
int var_9 = -212167688;
unsigned long long int var_10 = 4168061344900578828ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)54883;
short var_14 = (short)8910;
void init() {
}

void checksum() {
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
