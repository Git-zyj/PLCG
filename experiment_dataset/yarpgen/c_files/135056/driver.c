#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11513949403274194550ULL;
unsigned long long int var_2 = 3294228401229703003ULL;
unsigned short var_3 = (unsigned short)65318;
short var_4 = (short)-9150;
_Bool var_5 = (_Bool)0;
long long int var_6 = -798898211966435936LL;
unsigned int var_7 = 400862390U;
signed char var_9 = (signed char)76;
signed char var_10 = (signed char)37;
int zero = 0;
int var_11 = 1986967406;
int var_12 = 2088970946;
unsigned long long int var_13 = 17707974424961847615ULL;
unsigned long long int var_14 = 5447909520989044039ULL;
short var_15 = (short)-20646;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
