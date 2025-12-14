#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3434237728U;
long long int var_3 = 1005459528318124936LL;
unsigned char var_4 = (unsigned char)160;
long long int var_7 = 5793274911557264202LL;
unsigned char var_8 = (unsigned char)185;
signed char var_9 = (signed char)94;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1320504702U;
long long int var_12 = -8160654184452812152LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
