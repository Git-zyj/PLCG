#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9059275343147172381LL;
unsigned short var_1 = (unsigned short)65268;
short var_2 = (short)19615;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
short var_7 = (short)23799;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 9524325126952963122ULL;
unsigned long long int var_12 = 509362426558479426ULL;
int zero = 0;
int var_13 = 1544918360;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-101;
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
