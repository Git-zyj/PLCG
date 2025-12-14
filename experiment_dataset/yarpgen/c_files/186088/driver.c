#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10907843024823690334ULL;
int var_1 = -2101490122;
short var_2 = (short)-154;
unsigned short var_4 = (unsigned short)52428;
long long int var_5 = 8148793711921290758LL;
short var_7 = (short)26716;
int zero = 0;
short var_10 = (short)2866;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-3233;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
