#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -443514724258610357LL;
unsigned int var_2 = 1698412904U;
unsigned char var_3 = (unsigned char)8;
unsigned long long int var_5 = 16355050473737373959ULL;
long long int var_6 = -4832774048866897095LL;
unsigned long long int var_10 = 2711146843554562542ULL;
int zero = 0;
signed char var_11 = (signed char)-82;
long long int var_12 = -1266313155745062799LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 6508676613576200048ULL;
unsigned long long int var_15 = 807759689216981329ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
