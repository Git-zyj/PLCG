#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3952350206348372180LL;
unsigned short var_3 = (unsigned short)27512;
unsigned char var_5 = (unsigned char)196;
long long int var_9 = -4551744407818289663LL;
long long int var_10 = -4241718515855340242LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2462395577U;
unsigned int var_14 = 1895684261U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
