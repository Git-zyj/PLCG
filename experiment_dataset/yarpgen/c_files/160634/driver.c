#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2493134691U;
unsigned char var_5 = (unsigned char)93;
unsigned char var_6 = (unsigned char)71;
unsigned short var_7 = (unsigned short)30598;
short var_9 = (short)19422;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2010158388U;
long long int var_14 = 5680793240439364520LL;
void init() {
}

void checksum() {
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
