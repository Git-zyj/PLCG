#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
_Bool var_1 = (_Bool)1;
unsigned char var_5 = (unsigned char)121;
unsigned char var_7 = (unsigned char)33;
int var_10 = -1080568299;
short var_14 = (short)-23506;
unsigned char var_17 = (unsigned char)60;
int zero = 0;
short var_19 = (short)-31058;
short var_20 = (short)23600;
short var_21 = (short)29165;
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
