#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 20609412701376925LL;
long long int var_4 = 8753786092496144797LL;
unsigned long long int var_5 = 8871048253596690004ULL;
unsigned int var_6 = 602231841U;
long long int var_10 = 7799164473317570080LL;
int zero = 0;
unsigned short var_13 = (unsigned short)62957;
unsigned long long int var_14 = 1608238307778519528ULL;
long long int var_15 = -2994564297196354084LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
