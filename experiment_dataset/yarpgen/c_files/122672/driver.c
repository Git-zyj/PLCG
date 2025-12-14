#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9473449612977416507ULL;
long long int var_3 = 2510099470535431811LL;
long long int var_7 = 2757029175740441972LL;
_Bool var_12 = (_Bool)0;
int var_13 = 235178783;
unsigned long long int var_15 = 12981323353168301960ULL;
unsigned long long int var_17 = 7373274294998082059ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)23673;
_Bool var_20 = (_Bool)1;
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
