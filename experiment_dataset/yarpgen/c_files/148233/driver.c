#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -5957364449408125165LL;
unsigned short var_13 = (unsigned short)21776;
_Bool var_14 = (_Bool)1;
unsigned long long int var_19 = 3061563676746068357ULL;
int zero = 0;
unsigned int var_20 = 3317343923U;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 606023650U;
void init() {
}

void checksum() {
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
