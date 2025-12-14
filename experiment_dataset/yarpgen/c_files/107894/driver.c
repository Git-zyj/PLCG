#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)220;
unsigned char var_9 = (unsigned char)62;
long long int var_11 = -5869399649091015754LL;
unsigned int var_16 = 1662688211U;
int zero = 0;
long long int var_19 = 8950480243443624150LL;
unsigned char var_20 = (unsigned char)73;
short var_21 = (short)10428;
unsigned short var_22 = (unsigned short)35763;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
