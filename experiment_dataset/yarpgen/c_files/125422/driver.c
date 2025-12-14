#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40463;
unsigned short var_1 = (unsigned short)30276;
long long int var_3 = 3080379965010462556LL;
int var_4 = 189934297;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-1248;
int var_10 = 901210399;
unsigned long long int var_12 = 161720558179556188ULL;
unsigned long long int var_15 = 10065932929887156383ULL;
long long int var_16 = 469905417356564051LL;
unsigned int var_17 = 3126026870U;
int zero = 0;
long long int var_18 = -639595924539612874LL;
unsigned int var_19 = 1428395943U;
unsigned long long int var_20 = 17249523312293121900ULL;
unsigned int var_21 = 2952384033U;
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
