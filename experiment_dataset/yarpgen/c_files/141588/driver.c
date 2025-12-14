#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 422764629U;
long long int var_8 = -8416041580730547899LL;
int var_9 = -963661571;
unsigned long long int var_10 = 16148470525089463020ULL;
unsigned char var_14 = (unsigned char)90;
long long int var_16 = -817397780854382383LL;
int zero = 0;
int var_18 = 393805984;
signed char var_19 = (signed char)51;
signed char var_20 = (signed char)50;
void init() {
}

void checksum() {
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
