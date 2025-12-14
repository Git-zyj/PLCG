#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1992848136U;
unsigned short var_1 = (unsigned short)64209;
_Bool var_3 = (_Bool)0;
short var_5 = (short)1137;
short var_8 = (short)-9060;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -1879874869;
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
