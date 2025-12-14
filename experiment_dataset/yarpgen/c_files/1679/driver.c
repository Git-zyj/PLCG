#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1132992290;
unsigned short var_5 = (unsigned short)62711;
long long int var_6 = -6496582504724623932LL;
unsigned int var_13 = 2103453897U;
int var_18 = 711892622;
int zero = 0;
short var_19 = (short)-28292;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1572124673U;
void init() {
}

void checksum() {
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
