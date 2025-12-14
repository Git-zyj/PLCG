#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1950121428U;
long long int var_2 = -4336640007663608594LL;
_Bool var_3 = (_Bool)0;
unsigned int var_6 = 563206795U;
unsigned long long int var_7 = 4964519636521021210ULL;
int zero = 0;
unsigned long long int var_10 = 13564836051237622611ULL;
long long int var_11 = -5061318753072420055LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
