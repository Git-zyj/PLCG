#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)41997;
unsigned char var_10 = (unsigned char)84;
_Bool var_11 = (_Bool)1;
short var_12 = (short)19524;
int zero = 0;
long long int var_13 = 1584910949870659299LL;
unsigned short var_14 = (unsigned short)20474;
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
