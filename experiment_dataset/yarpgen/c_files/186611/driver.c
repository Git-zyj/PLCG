#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)32809;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 8376718873961460570ULL;
long long int var_7 = 2908846167161432487LL;
unsigned short var_9 = (unsigned short)53317;
int zero = 0;
unsigned long long int var_10 = 13894727142866343163ULL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2646396635U;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
