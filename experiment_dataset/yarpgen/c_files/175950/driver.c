#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)33;
short var_2 = (short)5283;
unsigned short var_3 = (unsigned short)30551;
_Bool var_4 = (_Bool)0;
short var_8 = (short)-29171;
_Bool var_9 = (_Bool)1;
unsigned long long int var_15 = 10290386281730803421ULL;
int zero = 0;
unsigned int var_16 = 1655567095U;
signed char var_17 = (signed char)94;
void init() {
}

void checksum() {
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
