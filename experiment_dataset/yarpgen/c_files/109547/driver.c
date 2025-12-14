#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 152938521U;
unsigned int var_1 = 601725594U;
unsigned int var_3 = 1880810212U;
unsigned short var_4 = (unsigned short)60861;
unsigned int var_6 = 2467690855U;
unsigned short var_8 = (unsigned short)29884;
int zero = 0;
long long int var_11 = 8534884920021116171LL;
signed char var_12 = (signed char)27;
unsigned short var_13 = (unsigned short)65104;
long long int var_14 = 1266379665186271507LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
