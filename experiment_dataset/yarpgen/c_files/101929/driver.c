#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_6 = -789590015;
unsigned char var_8 = (unsigned char)69;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)11;
unsigned char var_18 = (unsigned char)239;
short var_19 = (short)-21415;
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
