#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 5222339058167733226LL;
unsigned long long int var_2 = 463318719973032764ULL;
long long int var_3 = -2708885664044404365LL;
unsigned short var_7 = (unsigned short)3223;
int var_10 = 1643666170;
int zero = 0;
short var_16 = (short)-6238;
unsigned short var_17 = (unsigned short)43282;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)47581;
unsigned int var_20 = 4212093853U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
