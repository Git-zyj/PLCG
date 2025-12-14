#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6161083927557287462LL;
int var_3 = 1249511877;
int var_5 = 1021043980;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)21;
_Bool var_12 = (_Bool)1;
long long int var_13 = 5828541866131289405LL;
int zero = 0;
signed char var_15 = (signed char)37;
short var_16 = (short)-17659;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
