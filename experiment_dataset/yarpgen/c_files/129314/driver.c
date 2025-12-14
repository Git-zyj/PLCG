#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-31;
long long int var_3 = 4535664491565481500LL;
unsigned int var_6 = 965191785U;
signed char var_8 = (signed char)73;
long long int var_9 = 6935946272861003362LL;
long long int var_13 = -7227448873508277224LL;
int zero = 0;
unsigned short var_14 = (unsigned short)32342;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)197;
unsigned char var_17 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
