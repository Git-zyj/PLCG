#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)71;
long long int var_2 = -7922536697823112621LL;
signed char var_4 = (signed char)-105;
unsigned int var_11 = 909278828U;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 3115726131491427193ULL;
unsigned char var_15 = (unsigned char)60;
int zero = 0;
int var_16 = 1813686824;
int var_17 = 1294958925;
unsigned char var_18 = (unsigned char)242;
long long int var_19 = 1426950817293648159LL;
unsigned int var_20 = 468051511U;
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
