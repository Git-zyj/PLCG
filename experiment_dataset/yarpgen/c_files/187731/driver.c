#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33379;
_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)43828;
long long int var_9 = 8510176331841891937LL;
unsigned char var_10 = (unsigned char)157;
int zero = 0;
unsigned long long int var_19 = 5659513916270234832ULL;
signed char var_20 = (signed char)-78;
signed char var_21 = (signed char)90;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
