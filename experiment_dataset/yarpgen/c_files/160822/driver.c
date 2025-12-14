#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10267893421357683816ULL;
short var_5 = (short)22668;
int var_6 = 1089582022;
unsigned short var_10 = (unsigned short)59575;
long long int var_12 = -5632122577680890462LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -711376222;
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
