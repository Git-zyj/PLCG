#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
signed char var_1 = (signed char)3;
long long int var_4 = -5724927260712714602LL;
_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)-94;
short var_11 = (short)22463;
unsigned short var_13 = (unsigned short)65469;
int zero = 0;
unsigned short var_15 = (unsigned short)17157;
unsigned long long int var_16 = 5897371971115770980ULL;
void init() {
}

void checksum() {
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
