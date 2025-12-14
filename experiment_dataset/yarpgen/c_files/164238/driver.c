#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1465514295;
long long int var_8 = -7577373230061844250LL;
int zero = 0;
signed char var_11 = (signed char)75;
unsigned int var_12 = 638579690U;
unsigned short var_13 = (unsigned short)12533;
long long int var_14 = 6869155069805958953LL;
unsigned short var_15 = (unsigned short)52414;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
