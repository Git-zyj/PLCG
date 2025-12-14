#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)21;
unsigned char var_4 = (unsigned char)85;
short var_5 = (short)19166;
_Bool var_6 = (_Bool)0;
short var_7 = (short)30294;
unsigned char var_9 = (unsigned char)139;
long long int var_10 = 1188421825224201348LL;
int zero = 0;
short var_11 = (short)21244;
_Bool var_12 = (_Bool)0;
long long int var_13 = 4909167410094954307LL;
void init() {
}

void checksum() {
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
