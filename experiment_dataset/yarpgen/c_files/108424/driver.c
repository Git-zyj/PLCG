#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned int var_7 = 3382220890U;
unsigned int var_13 = 3350916912U;
int zero = 0;
unsigned char var_18 = (unsigned char)198;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)85;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
