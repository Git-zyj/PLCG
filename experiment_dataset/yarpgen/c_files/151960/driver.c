#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)18811;
unsigned short var_3 = (unsigned short)18867;
unsigned long long int var_4 = 17810017686557008912ULL;
unsigned char var_5 = (unsigned char)230;
short var_6 = (short)18408;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 4282308822U;
int zero = 0;
unsigned long long int var_10 = 11916149325577044123ULL;
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
