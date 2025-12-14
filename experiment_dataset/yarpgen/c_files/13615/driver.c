#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8071969953555656550LL;
unsigned short var_2 = (unsigned short)15699;
long long int var_4 = 1959900147215862943LL;
unsigned short var_5 = (unsigned short)23157;
unsigned int var_6 = 1885865350U;
int var_7 = 1967810068;
int zero = 0;
unsigned long long int var_13 = 13171638825857987611ULL;
long long int var_14 = 4315927930367791042LL;
unsigned long long int var_15 = 5250643815183428667ULL;
unsigned long long int var_16 = 7690995951386603636ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
