#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1011049761904343255LL;
signed char var_10 = (signed char)107;
unsigned char var_11 = (unsigned char)100;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
