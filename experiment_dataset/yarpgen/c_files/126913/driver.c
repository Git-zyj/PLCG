#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11840;
signed char var_1 = (signed char)29;
unsigned long long int var_3 = 3094868681226080038ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)108;
unsigned long long int var_10 = 16428327238411270324ULL;
signed char var_13 = (signed char)92;
long long int var_15 = 2158075671531742453LL;
unsigned char var_18 = (unsigned char)105;
int zero = 0;
int var_19 = 550335526;
short var_20 = (short)-20929;
unsigned char var_21 = (unsigned char)88;
unsigned long long int var_22 = 8228582392186727728ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
