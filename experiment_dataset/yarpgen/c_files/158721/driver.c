#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7734465429398287321LL;
unsigned short var_4 = (unsigned short)19211;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-51;
signed char var_8 = (signed char)-22;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-123;
signed char var_14 = (signed char)-79;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
