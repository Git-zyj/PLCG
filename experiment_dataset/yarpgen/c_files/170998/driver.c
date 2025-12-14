#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44730;
int var_2 = -64513226;
signed char var_5 = (signed char)5;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-14310;
unsigned short var_9 = (unsigned short)39737;
unsigned int var_14 = 334257860U;
int zero = 0;
unsigned short var_15 = (unsigned short)60593;
unsigned int var_16 = 2099252000U;
unsigned short var_17 = (unsigned short)13204;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
