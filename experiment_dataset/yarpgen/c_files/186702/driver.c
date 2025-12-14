#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-63;
signed char var_3 = (signed char)-53;
long long int var_4 = -3413502298852282523LL;
int var_6 = -431101787;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 859281552U;
long long int var_11 = 7316403867370679710LL;
long long int var_12 = -8085347558954593546LL;
long long int var_14 = 1161225288152998423LL;
long long int var_17 = -621400461069790102LL;
unsigned long long int var_19 = 1327832160169990094ULL;
int zero = 0;
long long int var_20 = -5103387440672045841LL;
short var_21 = (short)32582;
unsigned long long int var_22 = 14531442554512917857ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
