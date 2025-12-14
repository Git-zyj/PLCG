#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2427517938U;
unsigned int var_3 = 3371110847U;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)0;
long long int var_9 = -5958143547468099202LL;
signed char var_10 = (signed char)-89;
long long int var_11 = 3910925039035633172LL;
unsigned long long int var_14 = 17541492151284280192ULL;
unsigned long long int var_16 = 2795370378204847001ULL;
long long int var_17 = -4790631781097887098LL;
int zero = 0;
long long int var_18 = -8211158698930078233LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = -5212316269565178778LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
