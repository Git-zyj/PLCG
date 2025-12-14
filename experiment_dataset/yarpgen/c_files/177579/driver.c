#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9505;
unsigned short var_4 = (unsigned short)37124;
unsigned char var_6 = (unsigned char)246;
signed char var_8 = (signed char)21;
short var_13 = (short)26080;
short var_14 = (short)-7872;
int zero = 0;
unsigned int var_17 = 3098745915U;
unsigned int var_18 = 2633703606U;
unsigned short var_19 = (unsigned short)16921;
unsigned int var_20 = 789252614U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
