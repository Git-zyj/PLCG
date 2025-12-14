#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)24;
short var_16 = (short)16263;
long long int var_17 = -567522539998913059LL;
int zero = 0;
unsigned char var_19 = (unsigned char)121;
unsigned char var_20 = (unsigned char)74;
unsigned short var_21 = (unsigned short)8412;
unsigned int var_22 = 898140307U;
unsigned char var_23 = (unsigned char)7;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
