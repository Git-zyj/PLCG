#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-119;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)161;
short var_8 = (short)-10141;
signed char var_9 = (signed char)-69;
unsigned int var_14 = 389681897U;
_Bool var_16 = (_Bool)0;
unsigned char var_19 = (unsigned char)74;
int zero = 0;
unsigned char var_20 = (unsigned char)92;
unsigned char var_21 = (unsigned char)87;
short var_22 = (short)-9249;
void init() {
}

void checksum() {
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
