#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)135;
unsigned short var_2 = (unsigned short)39424;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned short var_9 = (unsigned short)49847;
int zero = 0;
unsigned short var_16 = (unsigned short)1278;
unsigned short var_17 = (unsigned short)10583;
long long int var_18 = 3831563255710568092LL;
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
