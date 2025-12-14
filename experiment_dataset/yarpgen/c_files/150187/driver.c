#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-19;
unsigned long long int var_5 = 8506508731872492959ULL;
signed char var_6 = (signed char)23;
unsigned int var_7 = 2857327031U;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)88;
unsigned short var_14 = (unsigned short)49551;
int zero = 0;
unsigned char var_16 = (unsigned char)154;
int var_17 = -1278594648;
_Bool var_18 = (_Bool)0;
short var_19 = (short)27340;
void init() {
}

void checksum() {
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
