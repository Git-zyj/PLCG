#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)233;
signed char var_5 = (signed char)5;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)41;
long long int var_11 = 997487696843235868LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-15682;
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
