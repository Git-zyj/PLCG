#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 489264783;
signed char var_1 = (signed char)-22;
long long int var_2 = -2789856627177512050LL;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)36545;
long long int var_9 = 6661725072184971971LL;
int var_10 = -2015411846;
short var_11 = (short)11303;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-5631;
unsigned long long int var_14 = 16541556323824231610ULL;
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
