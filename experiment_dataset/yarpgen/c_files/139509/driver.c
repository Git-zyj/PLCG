#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3099095U;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 17277940956439016968ULL;
int var_7 = -593552888;
unsigned char var_8 = (unsigned char)76;
long long int var_12 = 2318095039150723818LL;
int zero = 0;
short var_15 = (short)13687;
unsigned long long int var_16 = 17936387066652428729ULL;
signed char var_17 = (signed char)-103;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
