#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)33735;
unsigned short var_7 = (unsigned short)35114;
_Bool var_8 = (_Bool)1;
long long int var_10 = -3928277025366860274LL;
int zero = 0;
int var_11 = -847840656;
signed char var_12 = (signed char)-53;
unsigned short var_13 = (unsigned short)1649;
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
