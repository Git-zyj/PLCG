#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
int var_8 = 1968928784;
signed char var_9 = (signed char)-22;
unsigned char var_10 = (unsigned char)4;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)239;
unsigned long long int var_19 = 15722297421381136425ULL;
unsigned short var_20 = (unsigned short)1956;
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
