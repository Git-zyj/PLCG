#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11342;
_Bool var_2 = (_Bool)0;
int var_4 = -869054764;
unsigned long long int var_6 = 16832977420938915203ULL;
short var_9 = (short)15700;
int zero = 0;
long long int var_10 = 6568055266900650887LL;
unsigned long long int var_11 = 17786539760347109596ULL;
unsigned short var_12 = (unsigned short)30479;
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
