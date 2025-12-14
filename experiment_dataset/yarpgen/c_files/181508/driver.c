#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 797782453;
signed char var_5 = (signed char)10;
long long int var_8 = -540628433655613412LL;
int var_9 = 1825551743;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 9063434835254824244ULL;
int zero = 0;
short var_18 = (short)-15353;
signed char var_19 = (signed char)82;
void init() {
}

void checksum() {
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
