#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11236901951849603349ULL;
unsigned char var_3 = (unsigned char)36;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 404426420250946451ULL;
unsigned long long int var_6 = 2331500696781703652ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)36958;
long long int var_10 = 8721632196811146942LL;
int zero = 0;
unsigned short var_11 = (unsigned short)63316;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)63427;
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
