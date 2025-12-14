#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)35;
signed char var_11 = (signed char)88;
unsigned short var_14 = (unsigned short)29258;
unsigned int var_15 = 1821996826U;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-105;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
