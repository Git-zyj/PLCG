#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48796;
short var_1 = (short)9672;
unsigned char var_2 = (unsigned char)238;
unsigned int var_4 = 2433837779U;
short var_5 = (short)-13502;
unsigned short var_8 = (unsigned short)562;
unsigned int var_9 = 2861141625U;
short var_10 = (short)-31978;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)11035;
short var_13 = (short)31374;
unsigned long long int var_14 = 3391790330961161363ULL;
unsigned int var_15 = 532576041U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
