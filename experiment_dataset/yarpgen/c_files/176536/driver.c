#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -174813417160823831LL;
long long int var_5 = 4081370815345066351LL;
unsigned long long int var_6 = 10032972205802372666ULL;
long long int var_7 = 7246654843762787617LL;
signed char var_8 = (signed char)42;
int var_9 = -987752015;
unsigned int var_10 = 1483930683U;
unsigned long long int var_11 = 15300355598361125203ULL;
unsigned int var_14 = 1328963128U;
_Bool var_18 = (_Bool)0;
long long int var_19 = 4212330099867547344LL;
int zero = 0;
long long int var_20 = -2299005439009018041LL;
long long int var_21 = -452094054555819611LL;
void init() {
}

void checksum() {
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
