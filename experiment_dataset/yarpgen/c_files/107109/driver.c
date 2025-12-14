#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9369;
signed char var_5 = (signed char)23;
long long int var_6 = -5281554266378613631LL;
unsigned int var_9 = 461099940U;
unsigned int var_13 = 4147592629U;
unsigned int var_14 = 1057479358U;
int zero = 0;
int var_16 = 266898968;
_Bool var_17 = (_Bool)1;
long long int var_18 = 3391993788528785370LL;
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
