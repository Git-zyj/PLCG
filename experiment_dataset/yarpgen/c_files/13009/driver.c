#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11773901807975091841ULL;
unsigned int var_1 = 1240288152U;
signed char var_3 = (signed char)106;
short var_4 = (short)-10158;
unsigned char var_9 = (unsigned char)136;
long long int var_11 = -987981331059572563LL;
int zero = 0;
unsigned int var_13 = 3857444749U;
short var_14 = (short)13401;
unsigned long long int var_15 = 1957052150395129412ULL;
signed char var_16 = (signed char)-105;
signed char var_17 = (signed char)-3;
void init() {
}

void checksum() {
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
