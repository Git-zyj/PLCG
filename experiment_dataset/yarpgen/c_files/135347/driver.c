#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16346;
int var_5 = 1183906251;
_Bool var_13 = (_Bool)0;
short var_18 = (short)-16038;
int zero = 0;
unsigned long long int var_19 = 18060797095276807987ULL;
int var_20 = 634917223;
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
