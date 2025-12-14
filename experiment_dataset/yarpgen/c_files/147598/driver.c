#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1765335761;
signed char var_1 = (signed char)58;
unsigned char var_2 = (unsigned char)231;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)94;
_Bool var_10 = (_Bool)1;
long long int var_11 = 4790343130983517859LL;
signed char var_12 = (signed char)26;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)1216;
unsigned short var_17 = (unsigned short)17092;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
