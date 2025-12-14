#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7145706121232910581ULL;
long long int var_3 = 3018957830815046646LL;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)26515;
short var_14 = (short)9018;
void init() {
}

void checksum() {
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
