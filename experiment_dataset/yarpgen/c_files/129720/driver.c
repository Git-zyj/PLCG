#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_12 = (unsigned short)21532;
unsigned int var_13 = 3187154106U;
unsigned long long int var_14 = 6698433129102526683ULL;
unsigned short var_15 = (unsigned short)24979;
int zero = 0;
long long int var_18 = 5420401762819982711LL;
signed char var_19 = (signed char)71;
long long int var_20 = 5166022726125965412LL;
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
