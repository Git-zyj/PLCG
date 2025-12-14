#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
_Bool var_1 = (_Bool)0;
unsigned char var_5 = (unsigned char)195;
unsigned long long int var_6 = 12280668216697257664ULL;
unsigned long long int var_14 = 8097049628986482752ULL;
unsigned int var_15 = 2414563642U;
int zero = 0;
short var_20 = (short)9516;
unsigned char var_21 = (unsigned char)30;
unsigned short var_22 = (unsigned short)10851;
signed char var_23 = (signed char)74;
void init() {
}

void checksum() {
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
