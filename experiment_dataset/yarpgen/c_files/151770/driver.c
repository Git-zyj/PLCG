#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16091174186366945661ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_10 = 1322613134U;
int zero = 0;
unsigned char var_13 = (unsigned char)251;
unsigned int var_14 = 4189299596U;
unsigned int var_15 = 1794250050U;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1210512380U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
