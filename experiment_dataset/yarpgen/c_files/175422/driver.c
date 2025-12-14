#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 8280842962933677640ULL;
short var_5 = (short)-18539;
short var_10 = (short)5336;
unsigned long long int var_12 = 8731584628701234307ULL;
unsigned long long int var_13 = 5719236328844121373ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)39047;
unsigned short var_15 = (unsigned short)31603;
short var_16 = (short)-11601;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
