#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -340615802750254913LL;
unsigned long long int var_4 = 14786880944914474340ULL;
unsigned long long int var_5 = 15528215435592335895ULL;
short var_6 = (short)20986;
unsigned char var_9 = (unsigned char)117;
int var_10 = -529812689;
int zero = 0;
short var_11 = (short)-32527;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
