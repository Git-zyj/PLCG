#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)121;
int var_2 = 183727630;
unsigned char var_4 = (unsigned char)173;
int var_6 = 623265999;
unsigned int var_7 = 3170828788U;
signed char var_8 = (signed char)11;
int zero = 0;
unsigned long long int var_10 = 2283697363401750632ULL;
unsigned char var_11 = (unsigned char)156;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
