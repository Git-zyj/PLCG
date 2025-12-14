#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-94;
_Bool var_3 = (_Bool)0;
unsigned short var_14 = (unsigned short)24701;
long long int var_16 = -2473059334188431243LL;
int zero = 0;
unsigned long long int var_19 = 14790200755351716410ULL;
signed char var_20 = (signed char)100;
long long int var_21 = -1222634033171302920LL;
unsigned long long int var_22 = 16303497752409141905ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
