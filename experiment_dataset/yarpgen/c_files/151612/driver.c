#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
unsigned short var_1 = (unsigned short)3016;
short var_3 = (short)20783;
long long int var_6 = -7165560503412800175LL;
int zero = 0;
unsigned short var_16 = (unsigned short)19907;
unsigned short var_17 = (unsigned short)60157;
unsigned long long int var_18 = 5428969310270749774ULL;
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
