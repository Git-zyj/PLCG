#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62524;
unsigned int var_2 = 1399745837U;
int var_3 = 841543908;
unsigned int var_4 = 4132840363U;
long long int var_9 = -411090714066881312LL;
long long int var_10 = 1177216641072120253LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)53;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
