#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2391969340U;
unsigned int var_1 = 3899805259U;
unsigned int var_2 = 662428993U;
unsigned int var_3 = 127216850U;
unsigned int var_5 = 496286768U;
unsigned int var_6 = 2664909843U;
unsigned int var_8 = 1500885972U;
unsigned int var_9 = 1020041260U;
unsigned int var_10 = 151329324U;
unsigned int var_13 = 2110931527U;
int zero = 0;
unsigned int var_18 = 4290516693U;
unsigned int var_19 = 2580856918U;
unsigned int var_20 = 1267111313U;
unsigned int var_21 = 2317498821U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
