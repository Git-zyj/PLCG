#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-99;
long long int var_3 = 4790899688133727213LL;
long long int var_5 = 4732691743418187440LL;
unsigned int var_7 = 878600517U;
short var_9 = (short)9535;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -1250352858;
unsigned short var_13 = (unsigned short)60804;
int var_14 = -1442347901;
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
