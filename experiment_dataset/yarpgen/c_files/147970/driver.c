#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1810180301U;
long long int var_12 = 3370867220961364363LL;
unsigned char var_17 = (unsigned char)119;
int zero = 0;
short var_18 = (short)-15306;
short var_19 = (short)-27369;
unsigned char var_20 = (unsigned char)183;
unsigned int var_21 = 1787381894U;
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
