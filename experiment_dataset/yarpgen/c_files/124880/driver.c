#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-115;
unsigned char var_16 = (unsigned char)96;
long long int var_17 = 6048117656364351707LL;
int zero = 0;
unsigned short var_19 = (unsigned short)48563;
int var_20 = -1943590624;
signed char var_21 = (signed char)91;
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
