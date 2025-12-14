#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47027;
unsigned short var_3 = (unsigned short)53503;
signed char var_6 = (signed char)-87;
signed char var_9 = (signed char)72;
short var_12 = (short)29261;
unsigned short var_14 = (unsigned short)10694;
int zero = 0;
short var_19 = (short)23401;
long long int var_20 = -842798323262552359LL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
