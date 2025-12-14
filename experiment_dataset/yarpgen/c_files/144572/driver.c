#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9175013973933521654LL;
long long int var_1 = 378254224560938677LL;
unsigned int var_2 = 3225342213U;
short var_3 = (short)-30158;
int var_5 = 1592393799;
short var_6 = (short)-26408;
long long int var_8 = 236307252973910737LL;
long long int var_9 = 4302143272258035250LL;
long long int var_10 = -2022009189332246423LL;
int zero = 0;
long long int var_11 = 7510593561637253049LL;
long long int var_12 = -4440349920209531526LL;
_Bool var_13 = (_Bool)1;
int var_14 = 2071109062;
unsigned short var_15 = (unsigned short)5991;
unsigned short var_16 = (unsigned short)26922;
short var_17 = (short)18269;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
