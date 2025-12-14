#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53464;
short var_2 = (short)-30167;
unsigned int var_7 = 2937426983U;
long long int var_11 = -1660914109882689607LL;
long long int var_12 = -6158185564202157069LL;
int var_14 = 1580738529;
int zero = 0;
short var_15 = (short)-13434;
int var_16 = -1286119794;
int var_17 = 1420936769;
_Bool var_18 = (_Bool)0;
long long int var_19 = -8201012920359776151LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
