#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6176754033891827362LL;
unsigned short var_3 = (unsigned short)7642;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)42499;
signed char var_9 = (signed char)54;
unsigned long long int var_10 = 677073462590753381ULL;
long long int var_11 = 3671845668031485252LL;
unsigned long long int var_12 = 14301748870517228172ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 508774940;
unsigned short var_20 = (unsigned short)21730;
long long int var_21 = -398506906138777525LL;
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
