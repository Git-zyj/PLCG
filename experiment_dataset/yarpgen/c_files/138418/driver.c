#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2776721256399102301LL;
long long int var_2 = 7816063144761706243LL;
unsigned short var_5 = (unsigned short)28742;
long long int var_8 = 4024886099137434597LL;
signed char var_13 = (signed char)-127;
int zero = 0;
unsigned long long int var_14 = 13134548599336745488ULL;
_Bool var_15 = (_Bool)1;
long long int var_16 = -5399100282869084401LL;
long long int var_17 = -4156979515825312690LL;
short var_18 = (short)12675;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
