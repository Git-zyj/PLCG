#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 4269175545131105670LL;
unsigned short var_3 = (unsigned short)2697;
int var_5 = 1432176257;
unsigned long long int var_8 = 18012549320799000881ULL;
unsigned short var_9 = (unsigned short)43575;
int zero = 0;
long long int var_11 = 1704436842131006594LL;
unsigned long long int var_12 = 4989834424121828450ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
