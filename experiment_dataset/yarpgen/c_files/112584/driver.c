#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29870;
unsigned short var_2 = (unsigned short)28069;
unsigned int var_8 = 4092579637U;
long long int var_17 = -7743869401986826555LL;
int zero = 0;
unsigned long long int var_19 = 18094407679410491275ULL;
signed char var_20 = (signed char)-76;
short var_21 = (short)19301;
_Bool var_22 = (_Bool)1;
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
