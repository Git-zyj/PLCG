#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2351281736U;
unsigned int var_1 = 2090367414U;
int var_2 = -583848928;
unsigned int var_3 = 3013019521U;
signed char var_4 = (signed char)107;
_Bool var_5 = (_Bool)0;
short var_7 = (short)431;
signed char var_8 = (signed char)76;
unsigned short var_9 = (unsigned short)18264;
unsigned short var_11 = (unsigned short)915;
short var_12 = (short)5971;
unsigned char var_13 = (unsigned char)82;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-65;
int zero = 0;
int var_16 = 1913100891;
unsigned int var_17 = 2655614917U;
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
