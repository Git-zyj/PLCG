#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9781518929720852567ULL;
signed char var_3 = (signed char)-30;
long long int var_4 = -8068484986454363923LL;
unsigned int var_5 = 961767075U;
unsigned long long int var_6 = 4225435990475350640ULL;
unsigned char var_10 = (unsigned char)44;
_Bool var_15 = (_Bool)1;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1046667507U;
int zero = 0;
unsigned int var_20 = 2316622838U;
signed char var_21 = (signed char)6;
signed char var_22 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
