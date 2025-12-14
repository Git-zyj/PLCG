#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)9057;
int var_4 = -1921458921;
int var_5 = -1454261425;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int var_10 = -140101568;
signed char var_11 = (signed char)-30;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)19460;
void init() {
}

void checksum() {
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
