#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)60;
unsigned char var_10 = (unsigned char)136;
signed char var_15 = (signed char)92;
unsigned char var_16 = (unsigned char)59;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 604619520U;
unsigned short var_19 = (unsigned short)61574;
long long int var_20 = 2246131269283467382LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
