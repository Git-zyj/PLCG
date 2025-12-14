#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1417671440;
unsigned short var_5 = (unsigned short)13939;
unsigned char var_13 = (unsigned char)158;
unsigned short var_16 = (unsigned short)23976;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 17381145773447773716ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
