#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5981;
long long int var_5 = -5074034327642120759LL;
long long int var_6 = 3429390477185139305LL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1276646438U;
unsigned long long int var_10 = 792160179022953570ULL;
unsigned char var_12 = (unsigned char)139;
unsigned short var_14 = (unsigned short)39939;
int zero = 0;
short var_18 = (short)14152;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
