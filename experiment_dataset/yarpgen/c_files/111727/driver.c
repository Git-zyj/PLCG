#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31627;
short var_2 = (short)9739;
unsigned short var_4 = (unsigned short)55430;
short var_6 = (short)23566;
short var_8 = (short)-21095;
short var_9 = (short)-3570;
unsigned long long int var_10 = 13530375352907186570ULL;
long long int var_12 = 8286651374344452991LL;
signed char var_14 = (signed char)91;
int zero = 0;
short var_15 = (short)-28680;
unsigned long long int var_16 = 1855105138964942538ULL;
signed char var_17 = (signed char)124;
signed char var_18 = (signed char)52;
signed char var_19 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
