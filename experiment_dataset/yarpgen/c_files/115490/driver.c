#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16525;
short var_6 = (short)-3160;
unsigned int var_7 = 818200417U;
unsigned char var_11 = (unsigned char)162;
int zero = 0;
unsigned int var_12 = 1356125017U;
unsigned int var_13 = 3751982702U;
_Bool var_14 = (_Bool)1;
long long int var_15 = -6196484171978617444LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
