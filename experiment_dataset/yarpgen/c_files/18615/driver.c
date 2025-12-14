#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -339110712676124023LL;
int var_5 = -1635531695;
unsigned char var_9 = (unsigned char)65;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-59;
int zero = 0;
long long int var_15 = 6313729053550850258LL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
