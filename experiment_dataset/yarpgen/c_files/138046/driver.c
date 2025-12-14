#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)216;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 3684052728004060194ULL;
long long int var_8 = -8248864182069673848LL;
int var_12 = -1595315989;
int zero = 0;
unsigned short var_13 = (unsigned short)35618;
unsigned char var_14 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
