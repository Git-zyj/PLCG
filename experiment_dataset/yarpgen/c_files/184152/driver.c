#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)229;
unsigned long long int var_15 = 11869729025575372161ULL;
int zero = 0;
unsigned long long int var_18 = 8376734703718682621ULL;
long long int var_19 = 2145923419386214133LL;
signed char var_20 = (signed char)-78;
long long int var_21 = 185635660038542265LL;
unsigned int var_22 = 3890014592U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
