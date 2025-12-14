#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8752210501769220651ULL;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)1;
long long int var_10 = -1329336747633746071LL;
signed char var_13 = (signed char)68;
short var_14 = (short)7714;
unsigned long long int var_15 = 14520532927735464615ULL;
unsigned char var_16 = (unsigned char)36;
int var_18 = 533536488;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-9191;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
