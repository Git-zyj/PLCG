#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)42481;
unsigned int var_6 = 1773980638U;
short var_10 = (short)2743;
int zero = 0;
long long int var_16 = -2588196002436907796LL;
short var_17 = (short)29704;
unsigned char var_18 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
