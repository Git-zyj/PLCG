#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 536160118U;
long long int var_6 = 3607857608718101611LL;
unsigned int var_7 = 2426442954U;
signed char var_9 = (signed char)116;
int zero = 0;
signed char var_12 = (signed char)-45;
unsigned int var_13 = 1984250259U;
long long int var_14 = 7452220189105321339LL;
int var_15 = 677170112;
unsigned long long int var_16 = 1105825180210268878ULL;
unsigned short var_17 = (unsigned short)12840;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
