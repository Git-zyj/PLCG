#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1718619603;
unsigned char var_3 = (unsigned char)145;
long long int var_8 = 2603841253767355205LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)10346;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
