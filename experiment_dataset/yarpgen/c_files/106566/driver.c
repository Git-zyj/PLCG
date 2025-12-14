#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)51;
long long int var_9 = -7663597898295086084LL;
short var_10 = (short)14870;
unsigned int var_12 = 4292626909U;
short var_13 = (short)-10798;
unsigned short var_15 = (unsigned short)24202;
int zero = 0;
long long int var_16 = 9008529802706364474LL;
unsigned long long int var_17 = 3430819870994135163ULL;
unsigned long long int var_18 = 238110235893689398ULL;
unsigned int var_19 = 1684909723U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
