#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4993908069100787329LL;
unsigned short var_3 = (unsigned short)47749;
_Bool var_4 = (_Bool)1;
unsigned short var_10 = (unsigned short)20796;
int zero = 0;
unsigned int var_11 = 1355933836U;
unsigned int var_12 = 3443191031U;
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
