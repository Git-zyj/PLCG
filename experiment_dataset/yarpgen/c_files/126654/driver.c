#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60096;
long long int var_1 = 1575130188027686111LL;
signed char var_2 = (signed char)8;
unsigned short var_3 = (unsigned short)32104;
long long int var_6 = 918615000776576986LL;
long long int var_9 = 8069857008214628424LL;
long long int var_10 = -2319627060331789087LL;
unsigned short var_15 = (unsigned short)63849;
signed char var_16 = (signed char)-57;
int zero = 0;
long long int var_17 = -7654362199242811504LL;
unsigned int var_18 = 560388602U;
long long int var_19 = -3708629953247784557LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
