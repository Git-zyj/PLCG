#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2708543795401801605LL;
int var_4 = 296256873;
long long int var_5 = 1010272235130350481LL;
int var_12 = 1155926753;
long long int var_17 = 3571497187131702152LL;
int zero = 0;
unsigned int var_18 = 1775993825U;
unsigned short var_19 = (unsigned short)60245;
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
