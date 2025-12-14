#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19097;
unsigned int var_1 = 3339575882U;
unsigned long long int var_2 = 9417399458585639374ULL;
_Bool var_4 = (_Bool)0;
signed char var_8 = (signed char)-105;
int var_9 = 1130250874;
unsigned int var_11 = 580121178U;
int zero = 0;
unsigned char var_12 = (unsigned char)166;
long long int var_13 = 9154775436922823748LL;
unsigned short var_14 = (unsigned short)30007;
_Bool var_15 = (_Bool)0;
long long int var_16 = 8847975792111645948LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
