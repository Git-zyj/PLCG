#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)12570;
unsigned long long int var_5 = 4799212246973921175ULL;
long long int var_6 = 4636981612398154382LL;
short var_7 = (short)2349;
unsigned long long int var_9 = 15283645163570524509ULL;
signed char var_10 = (signed char)-124;
long long int var_12 = -5322324885549796461LL;
int zero = 0;
signed char var_13 = (signed char)69;
int var_14 = 851247065;
signed char var_15 = (signed char)11;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
