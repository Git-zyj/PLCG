#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8563072353077812004LL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
long long int var_8 = 2936159206927696942LL;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 427542185U;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)46;
unsigned int var_19 = 2165877208U;
signed char var_20 = (signed char)-6;
unsigned short var_21 = (unsigned short)33352;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
