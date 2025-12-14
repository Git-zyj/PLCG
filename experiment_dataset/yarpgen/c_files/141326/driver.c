#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2526007713298543822LL;
unsigned long long int var_4 = 15993182777743157294ULL;
unsigned int var_7 = 2560481385U;
unsigned char var_12 = (unsigned char)192;
unsigned char var_13 = (unsigned char)26;
signed char var_14 = (signed char)-81;
int zero = 0;
unsigned short var_16 = (unsigned short)29613;
unsigned short var_17 = (unsigned short)31105;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
