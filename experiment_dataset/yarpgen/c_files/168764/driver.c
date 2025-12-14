#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30088;
short var_4 = (short)29531;
short var_6 = (short)17447;
signed char var_10 = (signed char)-13;
signed char var_14 = (signed char)32;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)71;
short var_20 = (short)22351;
long long int var_21 = 7033842780215978146LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
