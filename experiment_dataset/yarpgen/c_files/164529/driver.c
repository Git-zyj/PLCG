#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-108;
unsigned long long int var_2 = 9901621997391367737ULL;
signed char var_3 = (signed char)6;
unsigned char var_4 = (unsigned char)62;
long long int var_6 = 4456861989920863873LL;
unsigned long long int var_11 = 1047751126768443327ULL;
int zero = 0;
int var_12 = 65781696;
unsigned long long int var_13 = 2233886132274253277ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
