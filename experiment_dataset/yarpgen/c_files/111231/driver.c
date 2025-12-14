#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-36;
unsigned char var_3 = (unsigned char)135;
short var_4 = (short)1038;
int var_6 = -1780851145;
unsigned int var_7 = 639272141U;
unsigned char var_15 = (unsigned char)63;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-117;
unsigned char var_20 = (unsigned char)123;
unsigned char var_21 = (unsigned char)140;
unsigned int var_22 = 3285299319U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
