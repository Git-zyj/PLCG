#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)11553;
_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)124;
unsigned char var_8 = (unsigned char)133;
long long int var_10 = 8481295411888722573LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 1384270342;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
