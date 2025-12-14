#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4859244506696674072LL;
signed char var_1 = (signed char)75;
unsigned int var_5 = 412234348U;
_Bool var_6 = (_Bool)0;
unsigned char var_9 = (unsigned char)58;
signed char var_10 = (signed char)-119;
unsigned short var_11 = (unsigned short)55221;
signed char var_13 = (signed char)-68;
int zero = 0;
int var_16 = -1833142760;
long long int var_17 = 276333042150847875LL;
short var_18 = (short)18471;
unsigned char var_19 = (unsigned char)112;
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
