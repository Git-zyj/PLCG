#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56831;
unsigned short var_2 = (unsigned short)22342;
unsigned char var_3 = (unsigned char)189;
unsigned int var_6 = 3280625210U;
long long int var_7 = -421891245245917763LL;
unsigned char var_8 = (unsigned char)121;
int zero = 0;
long long int var_20 = -8812447188994897472LL;
unsigned short var_21 = (unsigned short)42409;
signed char var_22 = (signed char)-68;
void init() {
}

void checksum() {
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
