#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11487460794559991564ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_7 = 14501067755746996475ULL;
int var_8 = 174652560;
_Bool var_10 = (_Bool)1;
long long int var_15 = 7081787991136189273LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -1662982638731005949LL;
unsigned short var_19 = (unsigned short)22716;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
