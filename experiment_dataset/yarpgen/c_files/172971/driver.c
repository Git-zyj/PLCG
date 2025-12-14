#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8303467481836702751LL;
unsigned char var_3 = (unsigned char)100;
long long int var_4 = 229055724103391858LL;
int zero = 0;
unsigned char var_12 = (unsigned char)245;
unsigned int var_13 = 285574758U;
unsigned short var_14 = (unsigned short)18516;
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
