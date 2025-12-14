#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3061448611842338010LL;
int var_3 = -697714983;
unsigned short var_5 = (unsigned short)10761;
unsigned long long int var_7 = 6876548635307550555ULL;
unsigned char var_9 = (unsigned char)140;
int var_12 = 1284405685;
int var_15 = -2036786542;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 1223545116;
unsigned int var_21 = 2253019811U;
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
