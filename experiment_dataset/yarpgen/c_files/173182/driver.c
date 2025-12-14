#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2666907963559802706ULL;
unsigned char var_2 = (unsigned char)92;
unsigned int var_3 = 1260956443U;
long long int var_4 = -5753464297862627330LL;
unsigned char var_7 = (unsigned char)175;
short var_9 = (short)22651;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -2295615587986047041LL;
unsigned short var_16 = (unsigned short)9134;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
