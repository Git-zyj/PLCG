#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46434;
_Bool var_2 = (_Bool)0;
unsigned long long int var_7 = 3147445195857824623ULL;
unsigned long long int var_12 = 11501150093419499647ULL;
int zero = 0;
long long int var_20 = 1238167590563203646LL;
unsigned int var_21 = 130718665U;
void init() {
}

void checksum() {
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
