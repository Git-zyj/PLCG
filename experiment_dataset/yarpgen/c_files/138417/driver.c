#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12909;
unsigned short var_2 = (unsigned short)49635;
unsigned long long int var_4 = 11846359576619198636ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = 6448344767142946114LL;
short var_12 = (short)16697;
signed char var_13 = (signed char)22;
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
