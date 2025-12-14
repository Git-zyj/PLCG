#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_8 = 11883255395604598613ULL;
long long int var_9 = -8254343115864620106LL;
unsigned short var_14 = (unsigned short)17974;
unsigned long long int var_17 = 17017826752813914708ULL;
int zero = 0;
unsigned int var_18 = 2203677778U;
unsigned int var_19 = 425642721U;
void init() {
}

void checksum() {
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
