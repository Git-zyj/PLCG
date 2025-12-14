#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1674643058U;
long long int var_9 = 7168596665887805893LL;
unsigned int var_10 = 2533550675U;
unsigned short var_12 = (unsigned short)65184;
unsigned char var_13 = (unsigned char)189;
signed char var_14 = (signed char)16;
unsigned char var_16 = (unsigned char)165;
int zero = 0;
int var_18 = -2093639855;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)41;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
