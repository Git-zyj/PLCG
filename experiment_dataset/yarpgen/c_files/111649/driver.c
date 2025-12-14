#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12423253545494490716ULL;
unsigned short var_6 = (unsigned short)56847;
long long int var_9 = -4828399707737701202LL;
unsigned long long int var_10 = 8858615458242324026ULL;
int var_12 = 469086434;
signed char var_13 = (signed char)33;
signed char var_14 = (signed char)86;
unsigned int var_15 = 257132994U;
int zero = 0;
unsigned short var_18 = (unsigned short)1406;
long long int var_19 = 6090587691960572282LL;
int var_20 = 527606824;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
