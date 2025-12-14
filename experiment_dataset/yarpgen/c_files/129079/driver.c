#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28381;
unsigned char var_4 = (unsigned char)103;
unsigned int var_11 = 4141431498U;
int var_13 = -741036836;
long long int var_17 = -3943653738851063045LL;
int zero = 0;
long long int var_18 = -1606868776298198550LL;
unsigned int var_19 = 3968632600U;
short var_20 = (short)2171;
unsigned short var_21 = (unsigned short)1947;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
