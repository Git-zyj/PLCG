#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)-77;
unsigned long long int var_4 = 12976804805501160733ULL;
short var_5 = (short)18649;
signed char var_6 = (signed char)59;
signed char var_7 = (signed char)120;
unsigned short var_8 = (unsigned short)3516;
unsigned char var_9 = (unsigned char)125;
signed char var_10 = (signed char)-115;
int zero = 0;
signed char var_11 = (signed char)-33;
short var_12 = (short)25762;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
