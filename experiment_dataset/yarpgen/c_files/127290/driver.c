#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 360007320;
int var_5 = -1934291962;
unsigned short var_8 = (unsigned short)14056;
unsigned char var_10 = (unsigned char)87;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)63600;
int var_20 = -569907261;
unsigned short var_21 = (unsigned short)31354;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
