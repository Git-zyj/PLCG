#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4349820891155797191LL;
unsigned char var_2 = (unsigned char)45;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = -50081993;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)42127;
long long int var_13 = 1498515701517937068LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
