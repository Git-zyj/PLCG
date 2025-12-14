#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1795599836U;
unsigned long long int var_11 = 16453933867255074999ULL;
int var_13 = -862485024;
int zero = 0;
unsigned long long int var_18 = 15129977309718948071ULL;
unsigned short var_19 = (unsigned short)31423;
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
