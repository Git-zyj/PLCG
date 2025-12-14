#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7731166293388778750LL;
unsigned long long int var_9 = 17547091625271927453ULL;
_Bool var_11 = (_Bool)0;
short var_14 = (short)-26288;
int var_16 = -1303045989;
int zero = 0;
short var_20 = (short)6934;
unsigned int var_21 = 2120750175U;
void init() {
}

void checksum() {
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
