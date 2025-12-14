#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9009;
short var_3 = (short)-16202;
unsigned int var_4 = 4228665072U;
unsigned long long int var_10 = 2137581174586068767ULL;
long long int var_11 = 8895665999493172389LL;
short var_12 = (short)17764;
unsigned int var_14 = 4065304538U;
int zero = 0;
long long int var_19 = 6462545149779114872LL;
long long int var_20 = 6166655333113851351LL;
long long int var_21 = 5029065426438697530LL;
long long int var_22 = 6812384316910017651LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
