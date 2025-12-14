#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-74;
_Bool var_1 = (_Bool)1;
unsigned short var_5 = (unsigned short)27805;
short var_7 = (short)28306;
int var_9 = 1117031081;
long long int var_10 = -2400225947498934064LL;
unsigned int var_11 = 3766233572U;
unsigned short var_12 = (unsigned short)53213;
signed char var_13 = (signed char)110;
long long int var_14 = -3199903503341594302LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)42617;
int var_17 = 871491706;
unsigned int var_18 = 1513329557U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
