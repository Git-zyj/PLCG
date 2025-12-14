#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61042;
unsigned short var_2 = (unsigned short)24630;
unsigned char var_3 = (unsigned char)69;
long long int var_4 = -3907272700636257199LL;
unsigned long long int var_5 = 1409060743391634675ULL;
unsigned short var_6 = (unsigned short)52164;
int zero = 0;
long long int var_14 = 6462791853376731549LL;
int var_15 = -827243129;
long long int var_16 = 8457927926744114171LL;
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
