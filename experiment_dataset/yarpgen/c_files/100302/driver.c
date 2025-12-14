#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 13342025968739280904ULL;
unsigned int var_10 = 3891178500U;
long long int var_13 = -923048510732655374LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_19 = -5002237394283463217LL;
short var_20 = (short)-17301;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
