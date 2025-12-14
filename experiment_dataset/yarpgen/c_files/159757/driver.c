#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6023154849970021871LL;
long long int var_1 = -7635894049256312231LL;
unsigned long long int var_2 = 1292198177296422090ULL;
unsigned long long int var_5 = 2763603486837475371ULL;
signed char var_7 = (signed char)37;
short var_8 = (short)-3725;
unsigned int var_9 = 1203158076U;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)97;
long long int var_12 = -6217919911921462800LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
