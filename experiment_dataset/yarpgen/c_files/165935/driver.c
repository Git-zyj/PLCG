#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1245728795;
unsigned long long int var_3 = 15659169911804440939ULL;
long long int var_4 = 8960041013541304739LL;
unsigned long long int var_5 = 4119924824482545641ULL;
short var_6 = (short)-5951;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-91;
unsigned int var_9 = 1337441614U;
int var_10 = -239552311;
short var_11 = (short)-9650;
int zero = 0;
short var_12 = (short)-13510;
long long int var_13 = -4428319578593420405LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
