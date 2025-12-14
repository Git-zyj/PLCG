#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3239936103U;
unsigned short var_4 = (unsigned short)16260;
short var_10 = (short)-331;
int zero = 0;
signed char var_17 = (signed char)-30;
unsigned short var_18 = (unsigned short)5760;
unsigned char var_19 = (unsigned char)251;
long long int var_20 = 3056888692619958493LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
