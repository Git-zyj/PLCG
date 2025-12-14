#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8029922328068165168ULL;
long long int var_4 = 5046956326250790519LL;
unsigned int var_5 = 2463876368U;
unsigned char var_6 = (unsigned char)127;
short var_7 = (short)3969;
short var_16 = (short)-20146;
int zero = 0;
unsigned int var_20 = 109822080U;
long long int var_21 = -7484503633065275037LL;
long long int var_22 = -971705426722411938LL;
unsigned char var_23 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
