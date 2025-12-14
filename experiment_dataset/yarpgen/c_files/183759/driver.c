#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15015737285564507810ULL;
_Bool var_2 = (_Bool)0;
long long int var_4 = -6946093889405715870LL;
unsigned short var_7 = (unsigned short)26502;
short var_10 = (short)-26720;
int zero = 0;
unsigned short var_11 = (unsigned short)13892;
int var_12 = 1563139093;
unsigned char var_13 = (unsigned char)69;
short var_14 = (short)30594;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
