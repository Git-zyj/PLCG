#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)109;
long long int var_3 = -6222105587762972173LL;
short var_9 = (short)5013;
_Bool var_12 = (_Bool)1;
unsigned long long int var_15 = 15074263791775454787ULL;
unsigned char var_16 = (unsigned char)168;
int zero = 0;
unsigned int var_19 = 1604465660U;
unsigned long long int var_20 = 9244028450966190355ULL;
unsigned long long int var_21 = 12662758159007572703ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
