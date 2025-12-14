#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-101;
unsigned short var_2 = (unsigned short)53084;
short var_4 = (short)2854;
_Bool var_5 = (_Bool)0;
unsigned int var_13 = 2067528598U;
int zero = 0;
short var_16 = (short)15483;
unsigned long long int var_17 = 9888234989721755840ULL;
signed char var_18 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
