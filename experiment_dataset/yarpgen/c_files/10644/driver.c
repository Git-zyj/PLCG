#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3821487377U;
short var_6 = (short)6512;
unsigned char var_7 = (unsigned char)159;
long long int var_11 = -6398835965172919427LL;
int zero = 0;
long long int var_16 = 5495579645740447325LL;
signed char var_17 = (signed char)120;
void init() {
}

void checksum() {
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
