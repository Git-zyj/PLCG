#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
unsigned char var_2 = (unsigned char)111;
short var_4 = (short)30875;
unsigned int var_6 = 1095883459U;
unsigned int var_9 = 1847445390U;
int zero = 0;
int var_10 = 818853742;
int var_11 = -522895285;
_Bool var_12 = (_Bool)0;
short var_13 = (short)11960;
unsigned short var_14 = (unsigned short)20044;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
