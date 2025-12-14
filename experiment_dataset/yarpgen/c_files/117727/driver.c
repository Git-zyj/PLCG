#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)187;
short var_5 = (short)16699;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
short var_11 = (short)26746;
short var_12 = (short)16232;
int zero = 0;
int var_13 = -963541936;
short var_14 = (short)6682;
unsigned short var_15 = (unsigned short)37454;
int var_16 = -1173043387;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
