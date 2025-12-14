#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
signed char var_1 = (signed char)114;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)-126;
int zero = 0;
unsigned char var_11 = (unsigned char)184;
unsigned char var_12 = (unsigned char)252;
void init() {
}

void checksum() {
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
