#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 4254809281994241948LL;
_Bool var_8 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_18 = (short)-7788;
long long int var_19 = 3336171255327075521LL;
unsigned int var_20 = 3653860097U;
unsigned short var_21 = (unsigned short)42494;
unsigned short var_22 = (unsigned short)54853;
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
