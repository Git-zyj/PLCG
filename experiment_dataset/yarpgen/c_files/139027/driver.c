#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2888372132U;
unsigned int var_4 = 198702356U;
long long int var_7 = -1452374920553711810LL;
int var_9 = -1253424348;
short var_13 = (short)-5231;
short var_14 = (short)7475;
int zero = 0;
unsigned int var_19 = 990514653U;
int var_20 = 1179102674;
short var_21 = (short)9963;
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
