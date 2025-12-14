#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6716626589325296279ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_9 = 6342777647628499449ULL;
unsigned long long int var_11 = 5282380971838309460ULL;
signed char var_12 = (signed char)-7;
int zero = 0;
int var_16 = -902474093;
long long int var_17 = -5392683743867889882LL;
unsigned long long int var_18 = 8710346701835564877ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
