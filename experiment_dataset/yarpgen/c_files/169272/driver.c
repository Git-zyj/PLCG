#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61407;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)121;
unsigned int var_5 = 1711837612U;
int var_8 = -1447950995;
unsigned long long int var_10 = 14654904832409832663ULL;
int zero = 0;
signed char var_12 = (signed char)117;
int var_13 = -410170849;
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
