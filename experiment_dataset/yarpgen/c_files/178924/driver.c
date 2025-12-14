#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)246;
long long int var_5 = -4792695140117497325LL;
long long int var_7 = -6048053209419837264LL;
long long int var_9 = -3656267234633411943LL;
signed char var_10 = (signed char)-67;
int var_12 = -297917514;
int zero = 0;
signed char var_14 = (signed char)86;
int var_15 = -2090894479;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
