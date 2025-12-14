#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)20701;
unsigned char var_2 = (unsigned char)174;
unsigned short var_3 = (unsigned short)52345;
unsigned char var_4 = (unsigned char)71;
unsigned long long int var_7 = 2392746606486907583ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)12224;
int zero = 0;
signed char var_11 = (signed char)-87;
signed char var_12 = (signed char)-100;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 13062138460783982410ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
