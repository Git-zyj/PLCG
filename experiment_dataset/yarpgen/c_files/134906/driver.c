#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9001580565724327554LL;
_Bool var_4 = (_Bool)1;
int var_8 = -1491372247;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 951401397;
int var_15 = 1833287240;
_Bool var_16 = (_Bool)1;
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
