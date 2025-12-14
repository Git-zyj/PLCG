#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)8;
unsigned short var_4 = (unsigned short)33335;
int var_5 = -1301562066;
unsigned char var_10 = (unsigned char)99;
int zero = 0;
unsigned char var_13 = (unsigned char)239;
unsigned short var_14 = (unsigned short)47240;
signed char var_15 = (signed char)105;
void init() {
}

void checksum() {
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
