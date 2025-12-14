#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
_Bool var_10 = (_Bool)0;
long long int var_11 = 3430253038432194430LL;
unsigned long long int var_12 = 10405557798153681634ULL;
long long int var_13 = -2487327306012820616LL;
unsigned char var_15 = (unsigned char)159;
int zero = 0;
unsigned int var_16 = 193313824U;
int var_17 = -286130834;
signed char var_18 = (signed char)-14;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
