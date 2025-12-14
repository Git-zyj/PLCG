#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
unsigned short var_1 = (unsigned short)23860;
unsigned char var_3 = (unsigned char)183;
_Bool var_6 = (_Bool)1;
int var_7 = -1849831339;
int zero = 0;
int var_13 = -105674675;
unsigned int var_14 = 3895133616U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
