#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1351840554U;
unsigned int var_1 = 3268246705U;
int var_7 = -1803596970;
_Bool var_8 = (_Bool)1;
int var_11 = -1885319271;
long long int var_12 = 6133257158782415779LL;
unsigned short var_14 = (unsigned short)48848;
_Bool var_16 = (_Bool)0;
unsigned int var_18 = 2520308502U;
int zero = 0;
unsigned int var_19 = 4126310496U;
int var_20 = -773780610;
unsigned int var_21 = 4105095793U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
