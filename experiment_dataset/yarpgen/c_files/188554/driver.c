#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-112;
unsigned char var_8 = (unsigned char)114;
unsigned int var_10 = 2100267821U;
signed char var_12 = (signed char)121;
int zero = 0;
signed char var_13 = (signed char)113;
signed char var_14 = (signed char)-125;
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
