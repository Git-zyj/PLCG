#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 131217467U;
signed char var_1 = (signed char)50;
long long int var_3 = -6612960334192216933LL;
long long int var_4 = 7157033021016551613LL;
short var_5 = (short)24894;
int var_6 = -1514298604;
unsigned int var_8 = 2027116125U;
int var_9 = 1847079553;
unsigned int var_10 = 378734242U;
unsigned long long int var_11 = 8334771774060440682ULL;
long long int var_12 = -1280863461053013273LL;
unsigned int var_14 = 3419012117U;
unsigned int var_15 = 412658130U;
int zero = 0;
unsigned short var_16 = (unsigned short)50921;
long long int var_17 = -3555620187458706921LL;
unsigned short var_18 = (unsigned short)20713;
void init() {
}

void checksum() {
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
