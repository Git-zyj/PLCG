#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3096354884703475244ULL;
long long int var_2 = -8365906347027044230LL;
long long int var_10 = 7366717150464889252LL;
unsigned long long int var_15 = 4712102270139360078ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1522941579U;
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
