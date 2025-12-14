#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2612;
_Bool var_1 = (_Bool)1;
unsigned int var_3 = 3011505022U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2828662572U;
signed char var_7 = (signed char)-101;
unsigned short var_8 = (unsigned short)63427;
long long int var_9 = -7161238668610516092LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -5013547516582260061LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
