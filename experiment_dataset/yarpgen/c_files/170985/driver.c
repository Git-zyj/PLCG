#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12989017666555308404ULL;
short var_4 = (short)13632;
unsigned int var_5 = 4160413784U;
unsigned long long int var_6 = 18080099864643549178ULL;
signed char var_8 = (signed char)42;
unsigned int var_9 = 186285934U;
long long int var_10 = 1803811335476044058LL;
int zero = 0;
short var_11 = (short)26337;
long long int var_12 = -1644057441125550258LL;
short var_13 = (short)-14514;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
