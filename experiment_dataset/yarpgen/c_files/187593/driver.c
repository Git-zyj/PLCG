#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1224352360;
int var_4 = 977704081;
_Bool var_7 = (_Bool)0;
int var_11 = -1646975061;
int zero = 0;
long long int var_12 = 7399829537165261902LL;
unsigned short var_13 = (unsigned short)56198;
void init() {
}

void checksum() {
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
