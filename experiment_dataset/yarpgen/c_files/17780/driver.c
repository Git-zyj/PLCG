#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5494616941495066263ULL;
unsigned short var_3 = (unsigned short)10153;
long long int var_4 = 4286513806284364339LL;
int var_5 = -1208935840;
short var_6 = (short)-15077;
unsigned long long int var_8 = 6570106032087813907ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-87;
int var_12 = 1923290453;
unsigned short var_13 = (unsigned short)12020;
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
