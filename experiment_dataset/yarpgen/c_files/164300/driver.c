#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3745814181U;
short var_2 = (short)-19522;
short var_4 = (short)12989;
unsigned char var_7 = (unsigned char)159;
long long int var_9 = 5687777094914470248LL;
unsigned int var_10 = 1748283990U;
unsigned char var_16 = (unsigned char)75;
int zero = 0;
unsigned int var_17 = 3930614065U;
unsigned short var_18 = (unsigned short)2238;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
