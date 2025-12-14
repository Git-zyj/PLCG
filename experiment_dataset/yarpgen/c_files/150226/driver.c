#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
_Bool var_2 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)163;
int var_18 = 1278936330;
unsigned char var_19 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
