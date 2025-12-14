#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)51;
unsigned short var_3 = (unsigned short)7137;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-1;
unsigned short var_8 = (unsigned short)64780;
unsigned char var_16 = (unsigned char)105;
int zero = 0;
int var_19 = -2081215095;
long long int var_20 = 413665294533329403LL;
unsigned char var_21 = (unsigned char)253;
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
