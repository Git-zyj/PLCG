#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8221986491639830113LL;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2069152852U;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 405260546781537406ULL;
long long int var_8 = -7807414993336551527LL;
short var_11 = (short)22371;
long long int var_13 = 8059850033916161700LL;
unsigned long long int var_14 = 11108212899535543715ULL;
long long int var_15 = 883805792468654892LL;
long long int var_17 = -7679146227427676480LL;
int zero = 0;
unsigned int var_20 = 3579750129U;
signed char var_21 = (signed char)122;
unsigned long long int var_22 = 9536846422286279068ULL;
unsigned long long int var_23 = 13978053587938247257ULL;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
