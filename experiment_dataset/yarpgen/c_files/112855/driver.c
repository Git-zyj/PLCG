#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)42;
unsigned long long int var_3 = 17378931758076947800ULL;
signed char var_4 = (signed char)22;
unsigned short var_11 = (unsigned short)63382;
long long int var_15 = -1880465864522241610LL;
int zero = 0;
unsigned int var_16 = 1362936042U;
long long int var_17 = -7630523406645857320LL;
unsigned short var_18 = (unsigned short)26656;
long long int var_19 = -1870270843764013495LL;
unsigned char var_20 = (unsigned char)147;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
