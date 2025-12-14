#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)63299;
unsigned short var_8 = (unsigned short)3171;
unsigned int var_9 = 2892450284U;
unsigned short var_14 = (unsigned short)39281;
long long int var_16 = -3971164476648090817LL;
unsigned short var_17 = (unsigned short)9464;
unsigned short var_19 = (unsigned short)3159;
int zero = 0;
unsigned short var_20 = (unsigned short)46707;
int var_21 = -1795269300;
void init() {
}

void checksum() {
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
