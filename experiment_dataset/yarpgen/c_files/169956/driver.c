#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2992296097U;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)74;
int zero = 0;
unsigned char var_18 = (unsigned char)94;
signed char var_19 = (signed char)-83;
void init() {
}

void checksum() {
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
