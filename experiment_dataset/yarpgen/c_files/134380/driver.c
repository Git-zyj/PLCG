#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)3;
unsigned short var_6 = (unsigned short)20874;
_Bool var_8 = (_Bool)1;
int var_9 = -1733734007;
unsigned long long int var_10 = 13921596067074118261ULL;
unsigned short var_11 = (unsigned short)6847;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-109;
int zero = 0;
unsigned short var_14 = (unsigned short)42422;
short var_15 = (short)18666;
void init() {
}

void checksum() {
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
