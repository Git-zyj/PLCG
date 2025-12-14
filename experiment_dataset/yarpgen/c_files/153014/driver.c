#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1804575050897725292LL;
long long int var_3 = 5588303387916547508LL;
long long int var_6 = 7125788008818012461LL;
signed char var_7 = (signed char)87;
signed char var_8 = (signed char)-22;
int zero = 0;
long long int var_15 = 7304351860861421129LL;
unsigned long long int var_16 = 12980598620240998545ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
