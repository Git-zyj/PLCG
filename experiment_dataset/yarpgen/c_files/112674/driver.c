#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7081656019392354484ULL;
long long int var_11 = -6895784149070407199LL;
unsigned long long int var_14 = 9515331183939966211ULL;
int zero = 0;
long long int var_15 = 1344808777328568348LL;
unsigned short var_16 = (unsigned short)36101;
unsigned char var_17 = (unsigned char)111;
void init() {
}

void checksum() {
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
