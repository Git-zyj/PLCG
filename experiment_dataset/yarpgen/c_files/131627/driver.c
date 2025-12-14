#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)88;
unsigned int var_6 = 1299197410U;
signed char var_8 = (signed char)36;
int var_11 = -212719495;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)74;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-21;
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
