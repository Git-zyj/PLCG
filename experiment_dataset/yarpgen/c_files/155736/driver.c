#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)47583;
unsigned short var_2 = (unsigned short)35275;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-1986;
signed char var_8 = (signed char)-61;
unsigned short var_9 = (unsigned short)12875;
signed char var_10 = (signed char)35;
int zero = 0;
unsigned char var_12 = (unsigned char)39;
long long int var_13 = -958301108676139375LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
