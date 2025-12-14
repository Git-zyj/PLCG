#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
int var_1 = -1512918263;
short var_7 = (short)21933;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)81;
unsigned short var_13 = (unsigned short)13213;
int zero = 0;
short var_15 = (short)-11466;
long long int var_16 = -8789263256165748696LL;
short var_17 = (short)20420;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
