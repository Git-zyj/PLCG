#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -549971303;
unsigned long long int var_2 = 14792326028532314603ULL;
long long int var_3 = -1833716211337945992LL;
unsigned int var_8 = 2756493211U;
unsigned char var_10 = (unsigned char)149;
unsigned long long int var_17 = 14360675277154223667ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)7;
unsigned char var_21 = (unsigned char)95;
unsigned char var_22 = (unsigned char)52;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
