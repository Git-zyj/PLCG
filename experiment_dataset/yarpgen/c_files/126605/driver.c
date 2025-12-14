#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 319820785898160958LL;
unsigned int var_7 = 2718433081U;
short var_9 = (short)-14099;
unsigned short var_10 = (unsigned short)17602;
signed char var_15 = (signed char)-69;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)119;
long long int var_20 = 3561554645631241199LL;
unsigned short var_21 = (unsigned short)3306;
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
