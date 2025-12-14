#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 91292791;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 1308016903U;
unsigned short var_9 = (unsigned short)62323;
int zero = 0;
unsigned short var_11 = (unsigned short)16689;
int var_12 = -816834410;
long long int var_13 = -9064539508863496169LL;
void init() {
}

void checksum() {
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
