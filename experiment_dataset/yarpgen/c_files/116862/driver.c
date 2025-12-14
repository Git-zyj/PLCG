#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 144567491U;
short var_1 = (short)-21818;
int var_5 = -952430279;
signed char var_9 = (signed char)-45;
unsigned char var_13 = (unsigned char)92;
int zero = 0;
unsigned int var_20 = 833870368U;
_Bool var_21 = (_Bool)1;
int var_22 = 36308751;
signed char var_23 = (signed char)24;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
