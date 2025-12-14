#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56043;
_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)614;
unsigned int var_13 = 232939189U;
unsigned char var_16 = (unsigned char)18;
int zero = 0;
long long int var_19 = 9075169396960388735LL;
unsigned short var_20 = (unsigned short)44619;
unsigned int var_21 = 2005334463U;
unsigned short var_22 = (unsigned short)60131;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
