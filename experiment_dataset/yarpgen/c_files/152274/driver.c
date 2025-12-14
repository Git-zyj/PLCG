#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22453;
unsigned long long int var_4 = 10376718837163835613ULL;
unsigned long long int var_11 = 7336451055867882611ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_17 = 85117686;
unsigned int var_18 = 4038753725U;
signed char var_19 = (signed char)24;
unsigned int var_20 = 3121749264U;
unsigned long long int var_21 = 16148180291326283636ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
