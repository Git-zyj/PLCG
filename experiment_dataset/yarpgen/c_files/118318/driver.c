#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)39603;
long long int var_5 = 4646434062802248139LL;
long long int var_6 = 3995287660694950884LL;
long long int var_10 = -6650423340700140594LL;
_Bool var_11 = (_Bool)0;
long long int var_12 = 1208496222567062350LL;
int var_14 = 1546489303;
int zero = 0;
unsigned short var_15 = (unsigned short)64343;
long long int var_16 = -6667889062007308334LL;
long long int var_17 = -4466953170040656378LL;
void init() {
}

void checksum() {
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
