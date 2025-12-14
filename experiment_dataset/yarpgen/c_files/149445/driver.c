#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1624494152;
short var_2 = (short)-9271;
unsigned short var_9 = (unsigned short)24640;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_17 = 10119516481418508265ULL;
unsigned short var_18 = (unsigned short)31688;
int zero = 0;
unsigned short var_19 = (unsigned short)33379;
unsigned short var_20 = (unsigned short)32861;
long long int var_21 = -8725007989287728904LL;
int var_22 = -907060763;
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
