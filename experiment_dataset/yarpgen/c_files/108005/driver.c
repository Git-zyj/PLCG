#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
_Bool var_3 = (_Bool)0;
short var_8 = (short)16846;
unsigned char var_9 = (unsigned char)249;
long long int var_10 = -2484680511160628805LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_14 = (short)16432;
signed char var_15 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
