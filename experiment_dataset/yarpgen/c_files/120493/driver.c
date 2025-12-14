#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)58;
long long int var_3 = 1852146875915289350LL;
int zero = 0;
unsigned char var_20 = (unsigned char)64;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)136;
long long int var_23 = 2379180070156466124LL;
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
