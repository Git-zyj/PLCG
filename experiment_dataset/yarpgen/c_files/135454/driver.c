#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-80;
_Bool var_3 = (_Bool)0;
long long int var_7 = -2057500144487867094LL;
unsigned char var_9 = (unsigned char)146;
unsigned short var_11 = (unsigned short)3099;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-14326;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-79;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
