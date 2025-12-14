#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10368236748544186673ULL;
_Bool var_1 = (_Bool)0;
long long int var_2 = 8866504382562353983LL;
unsigned short var_3 = (unsigned short)44257;
signed char var_7 = (signed char)-126;
long long int var_8 = -6989026871886322126LL;
_Bool var_9 = (_Bool)0;
long long int var_10 = 3090726184932709985LL;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)-10;
int zero = 0;
long long int var_17 = 6497834167820557159LL;
int var_18 = -1560486009;
unsigned int var_19 = 1455977834U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
