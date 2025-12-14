#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7479272045491298286LL;
unsigned short var_2 = (unsigned short)49210;
int var_3 = -1912855592;
unsigned short var_5 = (unsigned short)63726;
unsigned char var_6 = (unsigned char)207;
long long int var_8 = 954469326824024098LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-6813;
unsigned short var_12 = (unsigned short)32896;
unsigned short var_13 = (unsigned short)50926;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
