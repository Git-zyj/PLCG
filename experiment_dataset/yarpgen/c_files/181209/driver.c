#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27703;
unsigned int var_4 = 2873211455U;
unsigned int var_6 = 3465280525U;
unsigned int var_10 = 894274125U;
short var_12 = (short)-25974;
int var_15 = -2147236317;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3054437664U;
long long int var_19 = 7409329134437347060LL;
unsigned long long int var_20 = 15199174512585792527ULL;
void init() {
}

void checksum() {
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
