#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_4 = (short)-24759;
unsigned long long int var_5 = 12392146437631576800ULL;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)29;
short var_11 = (short)5329;
unsigned char var_14 = (unsigned char)253;
int zero = 0;
unsigned char var_20 = (unsigned char)252;
long long int var_21 = 2597883316739456184LL;
unsigned char var_22 = (unsigned char)208;
unsigned char var_23 = (unsigned char)228;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
