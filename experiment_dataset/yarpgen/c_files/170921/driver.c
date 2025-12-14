#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 982267069;
unsigned long long int var_2 = 17428261207889063969ULL;
signed char var_3 = (signed char)70;
long long int var_5 = 623219567834917494LL;
unsigned short var_6 = (unsigned short)5534;
int var_10 = 1087881955;
signed char var_12 = (signed char)-37;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 1426609437804972710LL;
unsigned long long int var_16 = 16339680644486715906ULL;
short var_17 = (short)1225;
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
