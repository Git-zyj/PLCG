#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1368151763;
_Bool var_1 = (_Bool)1;
long long int var_2 = 3337769069112741400LL;
signed char var_3 = (signed char)-127;
unsigned short var_4 = (unsigned short)28271;
unsigned short var_5 = (unsigned short)22567;
unsigned short var_6 = (unsigned short)51564;
unsigned char var_7 = (unsigned char)158;
signed char var_8 = (signed char)118;
_Bool var_9 = (_Bool)0;
int var_10 = 1902380379;
signed char var_11 = (signed char)28;
unsigned int var_13 = 3780003864U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 4154047679U;
short var_17 = (short)-17821;
unsigned long long int var_18 = 15121716655211571547ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
