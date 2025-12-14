#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_4 = 708620955690261346ULL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
short var_9 = (short)26088;
int zero = 0;
short var_11 = (short)-14463;
unsigned long long int var_12 = 12365230596644475605ULL;
long long int var_13 = -2041396248235853135LL;
unsigned long long int var_14 = 5240123515613569390ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
