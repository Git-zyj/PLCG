#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1683189869;
_Bool var_2 = (_Bool)0;
unsigned long long int var_6 = 13511061276805016594ULL;
unsigned short var_7 = (unsigned short)41872;
long long int var_9 = 7811975665138471741LL;
unsigned int var_10 = 3166262881U;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)11831;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)50455;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
