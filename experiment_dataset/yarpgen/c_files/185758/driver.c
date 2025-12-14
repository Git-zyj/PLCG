#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2433512520U;
unsigned char var_7 = (unsigned char)107;
short var_8 = (short)-29857;
_Bool var_10 = (_Bool)1;
unsigned long long int var_14 = 7616666719986943502ULL;
int zero = 0;
signed char var_20 = (signed char)-103;
int var_21 = 490347843;
void init() {
}

void checksum() {
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
