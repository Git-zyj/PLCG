#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_5 = 1281356462U;
unsigned short var_8 = (unsigned short)11938;
unsigned int var_13 = 3483516273U;
int zero = 0;
int var_19 = -885308552;
_Bool var_20 = (_Bool)1;
long long int var_21 = 3762063078909558435LL;
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
