#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3386387179U;
_Bool var_3 = (_Bool)1;
long long int var_6 = 698092251821256094LL;
unsigned char var_7 = (unsigned char)110;
long long int var_8 = 3004355767473437971LL;
long long int var_11 = -7405737507874662436LL;
short var_13 = (short)-28364;
short var_18 = (short)-13045;
int zero = 0;
long long int var_19 = -2597565242750606393LL;
long long int var_20 = 2944909644165078997LL;
long long int var_21 = -6113932149119306917LL;
short var_22 = (short)24321;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
