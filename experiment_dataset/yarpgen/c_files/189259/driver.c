#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2107604909;
unsigned int var_4 = 284232379U;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 2762795181U;
unsigned long long int var_8 = 15560093294502030743ULL;
unsigned int var_14 = 394494876U;
int zero = 0;
unsigned char var_16 = (unsigned char)33;
unsigned long long int var_17 = 3638144348993804026ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
