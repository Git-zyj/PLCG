#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-21099;
signed char var_9 = (signed char)43;
_Bool var_10 = (_Bool)0;
unsigned char var_14 = (unsigned char)139;
short var_15 = (short)-3449;
int zero = 0;
long long int var_16 = 3373222255561603752LL;
long long int var_17 = -2682263878346902256LL;
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
