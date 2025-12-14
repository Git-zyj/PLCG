#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1902658989601346703LL;
int var_4 = 2021103010;
short var_9 = (short)15347;
int zero = 0;
unsigned char var_10 = (unsigned char)9;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 616713825U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
