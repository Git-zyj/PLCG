#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1471250624;
_Bool var_3 = (_Bool)1;
short var_8 = (short)20602;
unsigned char var_9 = (unsigned char)28;
unsigned char var_10 = (unsigned char)21;
int zero = 0;
unsigned char var_11 = (unsigned char)17;
_Bool var_12 = (_Bool)1;
long long int var_13 = -4636581061774385817LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
