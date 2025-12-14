#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
long long int var_2 = 5553033691360977537LL;
short var_3 = (short)-1171;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)97;
int zero = 0;
unsigned short var_15 = (unsigned short)25116;
long long int var_16 = -8263176592014710659LL;
unsigned short var_17 = (unsigned short)59783;
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
