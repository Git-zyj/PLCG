#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3460835069U;
int var_1 = 511467240;
signed char var_2 = (signed char)-82;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)137;
int zero = 0;
int var_10 = -1566622454;
int var_11 = 1542100644;
int var_12 = 1390853201;
unsigned int var_13 = 2654202974U;
unsigned short var_14 = (unsigned short)55078;
unsigned long long int var_15 = 16877766159433694411ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
