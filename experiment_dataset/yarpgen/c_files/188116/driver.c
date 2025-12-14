#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15119;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)14597;
long long int var_12 = -8823871539692614685LL;
unsigned char var_15 = (unsigned char)31;
int zero = 0;
int var_16 = 159915738;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
