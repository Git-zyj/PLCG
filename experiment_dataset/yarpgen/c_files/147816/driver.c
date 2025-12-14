#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 7950961221877337358ULL;
int var_6 = -1301483844;
_Bool var_10 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 3861898775U;
unsigned int var_17 = 620426710U;
long long int var_18 = 7202064692266726442LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
