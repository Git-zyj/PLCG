#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)33;
unsigned int var_5 = 954744930U;
long long int var_11 = 8592794847794253972LL;
_Bool var_15 = (_Bool)1;
int var_16 = 1720076114;
int zero = 0;
long long int var_18 = -1444601154809631302LL;
long long int var_19 = 459329965691731790LL;
unsigned int var_20 = 1335123369U;
signed char var_21 = (signed char)-20;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
