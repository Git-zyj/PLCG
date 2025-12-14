#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14010460047227979717ULL;
short var_4 = (short)9299;
unsigned long long int var_5 = 9841252013943107407ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_12 = (unsigned short)63354;
int zero = 0;
unsigned short var_14 = (unsigned short)47450;
int var_15 = 1827692511;
_Bool var_16 = (_Bool)0;
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
