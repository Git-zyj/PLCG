#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4078911584177968743LL;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)29057;
long long int var_15 = -1545692980903805885LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 16563776523568384095ULL;
long long int var_20 = -1265400903349717669LL;
unsigned int var_21 = 1343319423U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
