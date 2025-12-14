#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3680652184350773491LL;
short var_1 = (short)-31344;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 16033745831954637586ULL;
unsigned char var_5 = (unsigned char)52;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-22494;
short var_9 = (short)-30818;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = 1171455902;
short var_12 = (short)-557;
unsigned int var_13 = 2182696344U;
long long int var_14 = -8708856541600358844LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
