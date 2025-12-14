#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)51;
short var_4 = (short)15892;
unsigned int var_5 = 2322348098U;
unsigned short var_6 = (unsigned short)64853;
short var_7 = (short)-5169;
unsigned int var_8 = 3516609892U;
signed char var_10 = (signed char)90;
unsigned int var_11 = 1789137737U;
unsigned int var_12 = 3524050983U;
unsigned short var_13 = (unsigned short)6751;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 127732768U;
long long int var_16 = 1720150651910181501LL;
signed char var_17 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
