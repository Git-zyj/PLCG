#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8073;
signed char var_3 = (signed char)11;
long long int var_6 = 7628401075982139368LL;
long long int var_9 = 8015519987305077154LL;
_Bool var_10 = (_Bool)1;
short var_16 = (short)14051;
signed char var_17 = (signed char)43;
int zero = 0;
unsigned int var_18 = 1597858008U;
short var_19 = (short)-10852;
void init() {
}

void checksum() {
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
