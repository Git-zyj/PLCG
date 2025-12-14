#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4726419275455072294LL;
_Bool var_2 = (_Bool)1;
unsigned short var_7 = (unsigned short)30089;
unsigned long long int var_9 = 8341479475996713624ULL;
unsigned long long int var_10 = 14054183939526528919ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 2571123901210650478LL;
unsigned char var_14 = (unsigned char)8;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
