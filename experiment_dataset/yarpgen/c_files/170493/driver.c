#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4155938671419722977LL;
unsigned long long int var_3 = 4224288925909418919ULL;
int var_8 = 588084327;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 13656378211136658525ULL;
unsigned int var_13 = 2694466177U;
int zero = 0;
unsigned long long int var_14 = 8807449290652668294ULL;
int var_15 = -451474905;
unsigned int var_16 = 3574783949U;
long long int var_17 = 1167553203540684538LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
