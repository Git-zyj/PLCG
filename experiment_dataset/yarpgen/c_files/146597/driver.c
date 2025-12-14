#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1952764905;
unsigned short var_3 = (unsigned short)52307;
_Bool var_6 = (_Bool)0;
long long int var_11 = 3985937088148999461LL;
int zero = 0;
unsigned char var_12 = (unsigned char)1;
signed char var_13 = (signed char)103;
int var_14 = 405336542;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
