#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-55;
signed char var_2 = (signed char)-41;
_Bool var_3 = (_Bool)0;
long long int var_6 = 312260042208440262LL;
unsigned short var_7 = (unsigned short)41087;
signed char var_10 = (signed char)-7;
long long int var_11 = -401722104689504283LL;
int zero = 0;
unsigned char var_15 = (unsigned char)252;
unsigned char var_16 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
