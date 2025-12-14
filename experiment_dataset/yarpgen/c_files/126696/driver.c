#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1703466141;
long long int var_2 = -1173764216777162839LL;
long long int var_4 = -6694139905296494588LL;
long long int var_5 = -964121454671292827LL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)51874;
int var_10 = 808978841;
int var_11 = 1301563933;
int zero = 0;
int var_13 = 664356509;
int var_14 = 1145590590;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
