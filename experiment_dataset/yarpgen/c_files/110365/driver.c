#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10292192517911038066ULL;
int var_2 = -1490504806;
short var_3 = (short)4014;
short var_4 = (short)-18709;
unsigned long long int var_5 = 18443024633783211882ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)34;
int zero = 0;
unsigned int var_12 = 916898963U;
unsigned char var_13 = (unsigned char)244;
unsigned int var_14 = 2800548565U;
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
