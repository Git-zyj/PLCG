#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 753968054;
int var_11 = -1893099598;
int var_13 = -1806051805;
int var_14 = 1458954833;
int var_15 = -718919294;
unsigned int var_17 = 2213968745U;
int zero = 0;
long long int var_19 = 2076272167695674441LL;
unsigned int var_20 = 2383423278U;
void init() {
}

void checksum() {
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
