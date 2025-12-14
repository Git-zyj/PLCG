#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15265976203120276965ULL;
long long int var_1 = -5268447055249361367LL;
unsigned int var_3 = 1153272802U;
unsigned int var_9 = 2243487848U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)33799;
unsigned long long int var_14 = 13654333536513577475ULL;
unsigned int var_15 = 3501298607U;
long long int var_16 = -3349455072719930287LL;
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
