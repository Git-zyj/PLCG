#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3190753218U;
unsigned int var_2 = 293784188U;
unsigned char var_7 = (unsigned char)228;
long long int var_10 = -7593975087517920348LL;
unsigned char var_13 = (unsigned char)149;
signed char var_15 = (signed char)-127;
long long int var_17 = 1610159638978618024LL;
int var_18 = 1559002838;
int zero = 0;
unsigned short var_19 = (unsigned short)3146;
_Bool var_20 = (_Bool)0;
long long int var_21 = -8244137736007227720LL;
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
