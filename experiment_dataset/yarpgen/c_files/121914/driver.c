#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1848186354;
int var_6 = 85674088;
signed char var_8 = (signed char)86;
unsigned short var_9 = (unsigned short)30810;
signed char var_10 = (signed char)-43;
signed char var_11 = (signed char)88;
int zero = 0;
int var_12 = 1112112464;
short var_13 = (short)30755;
short var_14 = (short)-12052;
short var_15 = (short)-22308;
unsigned short var_16 = (unsigned short)57920;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
