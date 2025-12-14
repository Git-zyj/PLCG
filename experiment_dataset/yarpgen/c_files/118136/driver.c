#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 118358430051022799LL;
unsigned char var_1 = (unsigned char)150;
unsigned char var_3 = (unsigned char)241;
long long int var_4 = 3496690253614628846LL;
unsigned short var_6 = (unsigned short)63346;
long long int var_8 = -3527800896589613244LL;
int var_11 = 1847968447;
int zero = 0;
unsigned int var_12 = 4096003739U;
unsigned char var_13 = (unsigned char)187;
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
