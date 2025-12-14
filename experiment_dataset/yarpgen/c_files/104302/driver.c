#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)18;
unsigned short var_3 = (unsigned short)24401;
long long int var_5 = -3694108247389494528LL;
unsigned short var_6 = (unsigned short)1388;
unsigned long long int var_7 = 2491059354791451208ULL;
unsigned short var_9 = (unsigned short)4434;
short var_10 = (short)26048;
int zero = 0;
unsigned char var_11 = (unsigned char)86;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)18806;
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
