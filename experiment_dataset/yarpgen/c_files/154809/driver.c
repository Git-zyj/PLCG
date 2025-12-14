#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 57620935U;
int var_5 = -1556407545;
unsigned char var_8 = (unsigned char)40;
unsigned short var_9 = (unsigned short)51989;
long long int var_12 = 6986335669387087101LL;
int zero = 0;
short var_20 = (short)22362;
short var_21 = (short)19151;
unsigned char var_22 = (unsigned char)136;
unsigned int var_23 = 4190492205U;
unsigned int var_24 = 3692312821U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
