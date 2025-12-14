#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)6;
signed char var_4 = (signed char)-7;
unsigned int var_8 = 1806170282U;
unsigned long long int var_9 = 1362428753812209920ULL;
int var_12 = 776955831;
int var_14 = -12729102;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 6014199937858225831LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
