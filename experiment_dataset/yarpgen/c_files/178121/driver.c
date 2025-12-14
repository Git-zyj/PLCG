#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 13183023294186780351ULL;
signed char var_10 = (signed char)62;
unsigned char var_14 = (unsigned char)90;
unsigned char var_18 = (unsigned char)224;
int zero = 0;
long long int var_19 = 4605730473821808737LL;
unsigned char var_20 = (unsigned char)132;
short var_21 = (short)-26474;
long long int var_22 = 354854885728504229LL;
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
