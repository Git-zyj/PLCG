#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2003457282;
_Bool var_3 = (_Bool)0;
long long int var_6 = 201181770628756697LL;
unsigned char var_7 = (unsigned char)245;
unsigned long long int var_8 = 5330962268380639495ULL;
unsigned long long int var_9 = 14845164322053688155ULL;
int zero = 0;
unsigned long long int var_10 = 3499882658753744085ULL;
unsigned char var_11 = (unsigned char)246;
short var_12 = (short)-25292;
unsigned char var_13 = (unsigned char)139;
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
