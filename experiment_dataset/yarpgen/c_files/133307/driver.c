#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3884745476U;
unsigned int var_6 = 3502950759U;
signed char var_14 = (signed char)56;
int zero = 0;
long long int var_17 = 6153657582800787795LL;
unsigned long long int var_18 = 12638839366922143966ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
