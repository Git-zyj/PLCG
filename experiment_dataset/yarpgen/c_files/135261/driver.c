#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9813;
signed char var_1 = (signed char)90;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)7223;
short var_11 = (short)-31021;
short var_12 = (short)-11401;
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
