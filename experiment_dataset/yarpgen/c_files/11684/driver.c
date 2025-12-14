#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12235485705249053676ULL;
signed char var_3 = (signed char)29;
unsigned long long int var_4 = 7250021851568671714ULL;
long long int var_5 = 663943332703658174LL;
signed char var_7 = (signed char)-41;
_Bool var_8 = (_Bool)1;
int var_9 = 1092230296;
unsigned long long int var_10 = 15332488332820476160ULL;
signed char var_12 = (signed char)1;
long long int var_14 = -7300060161019538857LL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 671936703U;
int zero = 0;
unsigned int var_18 = 1800749147U;
unsigned int var_19 = 1270696749U;
long long int var_20 = -984236097193779181LL;
unsigned int var_21 = 2145358180U;
unsigned int var_22 = 3293589818U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
