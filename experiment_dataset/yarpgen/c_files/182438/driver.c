#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17206822896290190362ULL;
unsigned char var_3 = (unsigned char)85;
unsigned long long int var_4 = 2182862736314510327ULL;
unsigned char var_6 = (unsigned char)200;
_Bool var_7 = (_Bool)1;
int zero = 0;
long long int var_10 = -6308513533132882005LL;
unsigned int var_11 = 2219237903U;
signed char var_12 = (signed char)-56;
unsigned long long int var_13 = 6641483614491993192ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
