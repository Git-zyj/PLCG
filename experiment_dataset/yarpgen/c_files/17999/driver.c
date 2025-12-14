#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)229;
unsigned int var_2 = 2688078384U;
long long int var_3 = -6880041558531658268LL;
long long int var_4 = -5081703700890700933LL;
int var_5 = 1108497295;
unsigned short var_7 = (unsigned short)36762;
long long int var_8 = 5276168569083590635LL;
long long int var_9 = 2275002547675244848LL;
short var_10 = (short)-31856;
int zero = 0;
short var_11 = (short)-32733;
unsigned long long int var_12 = 16726936253034978994ULL;
unsigned int var_13 = 3396205873U;
void init() {
}

void checksum() {
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
