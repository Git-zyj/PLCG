#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29101;
unsigned char var_2 = (unsigned char)72;
int var_4 = -1810819213;
_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)10;
int zero = 0;
int var_10 = 2012530451;
_Bool var_11 = (_Bool)1;
int var_12 = -2062339401;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
