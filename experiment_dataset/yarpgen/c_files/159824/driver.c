#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_4 = 2109887288726336344LL;
long long int var_7 = 3201052643048932143LL;
int var_9 = 32408947;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 3803080827U;
short var_19 = (short)16504;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
