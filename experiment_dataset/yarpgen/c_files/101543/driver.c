#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -192242143942659153LL;
unsigned int var_2 = 1214010593U;
signed char var_3 = (signed char)-79;
unsigned char var_10 = (unsigned char)205;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_16 = (short)10892;
unsigned char var_17 = (unsigned char)24;
short var_18 = (short)18742;
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
