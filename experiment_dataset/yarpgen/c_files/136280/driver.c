#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)178;
unsigned char var_5 = (unsigned char)9;
short var_6 = (short)-29018;
unsigned char var_9 = (unsigned char)170;
_Bool var_10 = (_Bool)0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)23;
int var_17 = 956450056;
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
