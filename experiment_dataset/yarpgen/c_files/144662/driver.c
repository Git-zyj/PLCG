#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 9072322094644809832LL;
long long int var_15 = 7618219176446627688LL;
long long int var_16 = 8665311652068369230LL;
int zero = 0;
signed char var_17 = (signed char)97;
signed char var_18 = (signed char)127;
long long int var_19 = -5765168967727279917LL;
void init() {
}

void checksum() {
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
