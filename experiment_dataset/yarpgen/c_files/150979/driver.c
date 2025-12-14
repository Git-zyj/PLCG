#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40246;
int var_3 = 778786164;
unsigned int var_4 = 2080974308U;
unsigned short var_8 = (unsigned short)62390;
unsigned int var_9 = 300769669U;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)58;
signed char var_12 = (signed char)-18;
long long int var_13 = 70607854573102043LL;
signed char var_14 = (signed char)55;
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
