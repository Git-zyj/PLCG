#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)84;
signed char var_3 = (signed char)3;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned char var_14 = (unsigned char)81;
int zero = 0;
int var_16 = 1424507580;
_Bool var_17 = (_Bool)1;
int var_18 = 486302259;
int var_19 = 1970674570;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
