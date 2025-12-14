#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
int var_14 = 1075215756;
int zero = 0;
unsigned short var_15 = (unsigned short)59280;
int var_16 = 621070664;
unsigned char var_17 = (unsigned char)135;
long long int var_18 = 3497913502508210025LL;
short var_19 = (short)14738;
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
