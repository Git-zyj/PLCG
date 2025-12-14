#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10294;
unsigned long long int var_3 = 664224866042640335ULL;
int var_4 = 1851413211;
short var_6 = (short)28307;
unsigned short var_7 = (unsigned short)62773;
int zero = 0;
unsigned char var_10 = (unsigned char)66;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
