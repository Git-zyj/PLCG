#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)106;
unsigned short var_9 = (unsigned short)48160;
short var_16 = (short)-19077;
unsigned short var_18 = (unsigned short)13480;
int zero = 0;
long long int var_19 = -8586746917210639829LL;
int var_20 = -501529428;
unsigned char var_21 = (unsigned char)210;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
