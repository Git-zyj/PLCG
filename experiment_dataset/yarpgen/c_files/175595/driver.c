#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1841679347;
unsigned int var_4 = 3689701952U;
long long int var_5 = -5667021022614943356LL;
unsigned long long int var_6 = 2643179153219913687ULL;
unsigned short var_7 = (unsigned short)49051;
unsigned long long int var_10 = 9497725145084112125ULL;
int zero = 0;
long long int var_11 = -5372399282429167544LL;
short var_12 = (short)13042;
unsigned long long int var_13 = 9673257042103381297ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
