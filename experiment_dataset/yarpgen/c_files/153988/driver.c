#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)121;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-29736;
_Bool var_4 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)212;
int var_9 = 2089255027;
short var_10 = (short)19428;
short var_15 = (short)21013;
int var_16 = 1866191810;
int zero = 0;
short var_20 = (short)-20754;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
