#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -236995454956579822LL;
signed char var_5 = (signed char)-123;
unsigned long long int var_8 = 7086725883423473409ULL;
unsigned int var_13 = 1899621672U;
_Bool var_16 = (_Bool)1;
int var_18 = 1596870643;
unsigned int var_19 = 3330067263U;
int zero = 0;
signed char var_20 = (signed char)8;
unsigned int var_21 = 2170120117U;
void init() {
}

void checksum() {
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
