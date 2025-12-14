#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
signed char var_1 = (signed char)103;
unsigned char var_2 = (unsigned char)73;
unsigned char var_4 = (unsigned char)46;
unsigned char var_5 = (unsigned char)225;
unsigned char var_6 = (unsigned char)146;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)74;
signed char var_9 = (signed char)87;
signed char var_11 = (signed char)38;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)94;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
