#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1954249763;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 10737304086922306211ULL;
short var_12 = (short)-30105;
short var_13 = (short)24177;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1146621980U;
long long int var_17 = -4375157739862391120LL;
short var_18 = (short)117;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
