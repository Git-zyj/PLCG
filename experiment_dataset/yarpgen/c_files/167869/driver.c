#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21771;
unsigned long long int var_2 = 11633319326161471907ULL;
long long int var_5 = 1925804986384113894LL;
int var_6 = 775240892;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)51;
short var_12 = (short)-16353;
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
