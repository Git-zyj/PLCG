#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)162;
int var_7 = 944525936;
unsigned long long int var_8 = 11183771599826228743ULL;
signed char var_9 = (signed char)35;
long long int var_10 = -8660311265978651417LL;
unsigned char var_13 = (unsigned char)51;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = 607840012;
unsigned long long int var_20 = 11418552357320031275ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
