#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-113;
short var_4 = (short)1461;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3408034149U;
unsigned long long int var_8 = 3057574975386775800ULL;
int var_12 = -827096013;
unsigned char var_13 = (unsigned char)187;
int zero = 0;
unsigned char var_17 = (unsigned char)86;
unsigned long long int var_18 = 4756336040910142527ULL;
int var_19 = 920130373;
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
