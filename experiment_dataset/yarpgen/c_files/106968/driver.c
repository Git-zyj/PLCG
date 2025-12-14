#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)221;
_Bool var_9 = (_Bool)0;
long long int var_13 = 9214123062490470483LL;
short var_14 = (short)-31412;
int zero = 0;
int var_18 = 1816882425;
short var_19 = (short)-1664;
long long int var_20 = 7978226630725846983LL;
short var_21 = (short)-22028;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
