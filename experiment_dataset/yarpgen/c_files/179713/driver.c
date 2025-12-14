#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6880853979921307746LL;
int var_3 = -440795301;
signed char var_8 = (signed char)-58;
short var_9 = (short)9796;
short var_10 = (short)1532;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)62295;
unsigned short var_17 = (unsigned short)20798;
short var_18 = (short)-22055;
long long int var_19 = 5266133193267094957LL;
void init() {
}

void checksum() {
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
