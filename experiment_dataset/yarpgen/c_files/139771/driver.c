#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8213562248482374246LL;
unsigned short var_1 = (unsigned short)8829;
unsigned long long int var_3 = 12265237207811222783ULL;
int var_4 = -1109111457;
unsigned long long int var_5 = 11029892932181448729ULL;
int var_7 = 1729571546;
unsigned int var_8 = 1119323423U;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)13;
unsigned long long int var_14 = 413705855761615474ULL;
unsigned int var_15 = 884330860U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
