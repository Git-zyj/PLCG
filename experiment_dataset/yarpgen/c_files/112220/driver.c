#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29304;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 3946394416U;
unsigned long long int var_6 = 5403677444388072784ULL;
unsigned long long int var_7 = 7732521629093882144ULL;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)24164;
unsigned int var_13 = 3958346699U;
unsigned char var_15 = (unsigned char)45;
int zero = 0;
unsigned int var_20 = 1522674345U;
signed char var_21 = (signed char)-92;
long long int var_22 = 6116024331610897802LL;
unsigned int var_23 = 1678495255U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
