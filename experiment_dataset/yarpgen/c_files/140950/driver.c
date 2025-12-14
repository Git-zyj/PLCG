#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2366614700377082853ULL;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)74;
unsigned short var_7 = (unsigned short)54764;
unsigned int var_9 = 4048730015U;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)28476;
signed char var_12 = (signed char)22;
unsigned char var_13 = (unsigned char)220;
long long int var_14 = 8051729818067431472LL;
int zero = 0;
signed char var_19 = (signed char)-6;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
