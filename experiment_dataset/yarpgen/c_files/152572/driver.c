#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6963245826529481801LL;
signed char var_3 = (signed char)-6;
_Bool var_5 = (_Bool)1;
unsigned char var_9 = (unsigned char)220;
int zero = 0;
unsigned short var_17 = (unsigned short)33678;
int var_18 = 1589623549;
void init() {
}

void checksum() {
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
