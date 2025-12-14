#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = 118973867921871531LL;
long long int var_5 = -697040806773252878LL;
long long int var_7 = 3094053904390202520LL;
short var_10 = (short)32045;
int zero = 0;
short var_11 = (short)20181;
short var_12 = (short)-15294;
long long int var_13 = -5536802630365369119LL;
long long int var_14 = -5713655530315666096LL;
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
