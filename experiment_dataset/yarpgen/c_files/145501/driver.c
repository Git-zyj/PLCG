#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6397041641464634186LL;
long long int var_5 = -1062012507560253088LL;
long long int var_6 = -420555645394372891LL;
long long int var_13 = 3785051094364493092LL;
long long int var_14 = 8657216016453760497LL;
long long int var_15 = -5802614262957359401LL;
int zero = 0;
long long int var_16 = -807741502400791593LL;
long long int var_17 = -7056780312850380053LL;
long long int var_18 = 4903512653644299206LL;
long long int var_19 = 722119428933006630LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
