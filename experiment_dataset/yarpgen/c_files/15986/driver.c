#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 12748870891450549272ULL;
signed char var_7 = (signed char)-30;
long long int var_10 = 8454134444117542976LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 17230968827420138697ULL;
unsigned long long int var_19 = 9118536932766832099ULL;
unsigned long long int var_20 = 10306128715630997906ULL;
void init() {
}

void checksum() {
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
