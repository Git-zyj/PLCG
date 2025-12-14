#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-18;
signed char var_4 = (signed char)-62;
_Bool var_6 = (_Bool)1;
short var_7 = (short)3841;
unsigned short var_11 = (unsigned short)28784;
signed char var_12 = (signed char)-115;
int zero = 0;
short var_14 = (short)-2524;
long long int var_15 = 6497458825968729714LL;
short var_16 = (short)-15576;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
