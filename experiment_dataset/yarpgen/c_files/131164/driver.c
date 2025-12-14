#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3960234453U;
unsigned int var_2 = 4266606241U;
unsigned long long int var_4 = 2598000489567334876ULL;
long long int var_6 = -6182493401768578731LL;
long long int var_8 = 3344471486799564932LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)140;
short var_14 = (short)19131;
unsigned short var_15 = (unsigned short)64313;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
