#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1908555200U;
short var_7 = (short)-14082;
int zero = 0;
long long int var_14 = 5008652224854188081LL;
signed char var_15 = (signed char)43;
unsigned short var_16 = (unsigned short)5704;
signed char var_17 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
