#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-113;
unsigned long long int var_3 = 14531421536971116303ULL;
unsigned int var_6 = 1013867340U;
unsigned long long int var_7 = 9988611576243425196ULL;
short var_9 = (short)-7698;
unsigned int var_15 = 1708453144U;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-6134;
int zero = 0;
signed char var_20 = (signed char)-111;
long long int var_21 = -8273349116410181505LL;
long long int var_22 = 2523561640304736888LL;
unsigned char var_23 = (unsigned char)44;
unsigned int var_24 = 4216532060U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
