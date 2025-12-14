#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40017;
unsigned short var_6 = (unsigned short)65436;
short var_7 = (short)26532;
int zero = 0;
unsigned char var_17 = (unsigned char)131;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)202;
unsigned char var_20 = (unsigned char)252;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
