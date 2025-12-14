#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 9470083036125289158ULL;
unsigned int var_7 = 51606321U;
long long int var_8 = -6915335107279675137LL;
unsigned long long int var_10 = 6622010489532104568ULL;
unsigned short var_13 = (unsigned short)24201;
int zero = 0;
long long int var_20 = -7795211435486728969LL;
short var_21 = (short)-25014;
short var_22 = (short)7138;
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
